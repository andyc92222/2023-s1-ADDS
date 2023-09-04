#include "QuickSort.h"
#include <stack>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(list, low, high);
        quickSort(list, low, pivotIndex - 1);
        quickSort(list, pivotIndex + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot;

    if (list.size() >= 3) {
        pivot = list[low + 2];
    } else {
        pivot = list[high];
    }

    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (list[j] < pivot) {
            i++;
            std::swap(list[i], list[j]);
        }
    }

    if (list.size() >= 3) {
        std::swap(list[i + 1], list[low + 2]);
    } else {
        std::swap(list[i + 1], list[high]);
    }
    
    return i + 1;
}