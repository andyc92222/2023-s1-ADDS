#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>

class Autocomplete {
public:
    Autocomplete();
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);

private:
    struct TrieNode;
    TrieNode* root;
    void findWords(TrieNode* node, std::string currentWord, std::vector<std::string>& suggestions);
};

#endif 
