#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int element) {
    int start = 0;
    int end = list.size() - 1;
    
    return searchRecursive(list, element, start, end);
}

bool RecursiveBinarySearch::searchRecursive(std::vector<int>& list, int element, int start, int end) {
    if (start > end) {
        return false; // Element not found
    }

    int mid = start + (end - start) / 2;

    if (list[mid] == element) {
        return true; // Element found
    } else if (list[mid] > element) {
        // Search in the left half
        return searchRecursive(list, element, start, mid - 1);
    } else {
        // Search in the right half
        return searchRecursive(list, element, mid + 1, end);
    }
}