#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string inputLine;
    std::getline(std::cin, inputLine);
    std::stringstream ss(inputLine);

    int num;
    std::vector<int> inputList;
    

    while (ss >> num) {
        inputList.push_back(num);
    }


    QuickSort quickSort;
    std::vector<int> sortedList = quickSort.sort(inputList);

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