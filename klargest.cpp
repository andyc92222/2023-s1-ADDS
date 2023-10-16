#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    
    std::priority_queue<int> maxHeap;

    
    for (int val : values) {
        maxHeap.push(val);
    }
    for (int i = 0; i < k - 1; i++) {
        if (maxHeap.empty()) {
            return -1; 
        }
        maxHeap.pop();
    }
    return maxHeap.top();
}