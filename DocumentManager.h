#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class DocumentManager {
public:
    DocumentManager();

    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);

private:
    struct Document {
        std::string name;
        int license_limit;
        int borrowed_count;
    };

    std::unordered_map<int, Document> documents;
    std::unordered_map<std::string, std::unordered_set<int>> document_names;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowed_documents;
};

#endif