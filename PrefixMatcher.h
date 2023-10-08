#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>

class PrefixMatcher {
public:
    PrefixMatcher();
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);

private:
    struct TrieNode;
    TrieNode* root;
};

#endif