#include "DocumentManager.h"

DocumentManager::DocumentManager() {}

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    documents[id] = {name, license_limit, 0};
    document_names[name].insert(id);
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    if (document_names.find(name) != document_names.end()) {
        return *document_names[name].begin();
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (documents.find(docid) == documents.end() || patrons.find(patronID) == patrons.end()) {
        return false;
    }

    Document& doc = documents[docid];
    if (doc.borrowed_count < doc.license_limit) {
        doc.borrowed_count++;
        borrowed_documents[patronID].insert(docid);
        return true;
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (borrowed_documents.find(patronID) != borrowed_documents.end() &&
        borrowed_documents[patronID].find(docid) != borrowed_documents[patronID].end()) {
        Document& doc = documents[docid];
        doc.borrowed_count--;
        borrowed_documents[patronID].erase(docid);
    }
}