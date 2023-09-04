#include <iostream>

#include "QuickSort.h"
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 4, -5, 100, 7777, 2014};
    QuickSort a ;

    arr = a.sort(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}