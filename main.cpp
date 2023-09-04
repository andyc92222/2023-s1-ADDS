#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input1;
    std::getline(std::cin, input1);
    std::stringstream list(input1);

    int num;
    std::vector<int> input2;
    

    while (list >> num) {
        input2.push_back(num);
    }

    QuickSort quickSort;
    std::vector<int> sortedList = quickSort.sort(input2);

    RecursiveBinarySearch binarySearch;
    bool result = binarySearch.search(sortedList, 1);

    std::cout << (result ? "true" : "false") << " ";

    for (int i = 0; i < sortedList.size(); ++i) {
        std::cout << sortedList[i];
        if (i < sortedList.size() - 1) {
            std::cout << " ";
        }
    }
    
    std::cout << std::endl;

    return 0;
}