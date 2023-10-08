#include "PrefixMatcher.h"

// Trie Node Definition
struct PrefixMatcher::TrieNode {
    int routerNumber;
    TrieNode* children[2];

    TrieNode() {
        routerNumber = -1;
        for (int i = 0; i < 2; ++i) {
            children[i] = nullptr;
        }
    }
};

// PrefixMatcher Class Implementation
PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* current = root;
    for (char c : address) {
        int index = c - '0';
        if (!current->children[index]) {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* current = root;
    int selectedRouter = -1;

    for (char c : networkAddress) {
        int index = c - '0';
        if (!current->children[index]) {
            break;
        }
        current = current->children[index];

        if (current->routerNumber != -1) {
            selectedRouter = current->routerNumber;
        }
    }

    return selectedRouter;
}
