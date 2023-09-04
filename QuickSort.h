#ifndef QUICK_H
#define QUICK_H

#include "Sort.h"

class QuickSort : public Sort {
public:
    std::vector<int> sort(std::vector<int> list) override;
    void quickSort(std::vector<int>& list, int left, int right);
    int partition(std::vector<int>& list, int left, int right);
};

#endif