#include <iostream>
#include "BigNumCalc.h"
#include<string>

int main() {
    BigNumCalc calculator;
    std::string num = "12345";
    // Sample input: 1234567890 + 9876543210
    std::list<int> num1 = {0,1,1,1,1};
    std::list<int> num2 = {2};

    std::list<int> result = calculator.add(num1,num2);

    // Output the result
    for (int digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;

    return 0;
}