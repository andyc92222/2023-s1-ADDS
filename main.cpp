#include <iostream>
#include"BubbleSort.h"
using namespace std;

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    BubbleSort a ;
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    arr = a.sort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}