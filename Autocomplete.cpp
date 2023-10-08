#include "Autocomplete.h"

// TrieNode Struct Definition
struct Autocomplete::TrieNode {
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        for (int i = 0; i < 26; ++i) {
            children[i] = nullptr;
        }
        isEndOfWord = false;
    }
};

// Autocomplete Class Implementation
Autocomplete::Autocomplete() {
    root = new TrieNode();
}

void Autocomplete::insert(std::string word) {
    TrieNode* current = root;
    for (char c : word) {
        int index = c - 'a';
        if (!current->children[index]) {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* current = root;

    for (char c : partialWord) {
        int index = c - 'a';
        if (!current->children[index]) {
            return suggestions;
        }
        current = current->children[index];
    }

    findWords(current, partialWord, suggestions);

    return suggestions;
}

void Autocomplete::findWords(TrieNode* node, std::string currentWord, std::vector<std::string>& suggestions) {
    if (node->isEndOfWord) {
        suggestions.push_back(currentWord);
    }

    for (int i = 0; i < 26; ++i) {
        if (node->children[i]) {
            char nextChar = 'a' + i;
            findWords(node->children[i], currentWord + nextChar, suggestions);
        }
    }
}
