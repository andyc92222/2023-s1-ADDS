#ifndef SORT_H
#define SORT_H
#include <vector>
#include <algorithm>

class Sort {
public:
    virtual std::vector<int> sort(std::vector<int> list) = 0;
};
#endif