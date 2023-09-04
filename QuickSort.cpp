#include "QuickSort.h"
#include <stack>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(list, left, right);
        quickSort(list, left, pivotIndex - 1);
        quickSort(list, pivotIndex + 1, right);
    }
}

int QuickSort::partition(std::vector<int>& list, int left, int right) {

    int middle = left + (right - left) / 2;
    int pivot = list[middle];

    std::swap(list[middle], list[right]);

    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (list[j] <= pivot) {
            i++;
            std::swap(list[i], list[j]);
        }
    }

    std::swap(list[i + 1], list[right]);
    
    return i + 1;
}