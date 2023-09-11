#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char digit : numString) {
        result.push_back(digit - '0');
    }
    return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    if (num1.empty() || num2.empty()) {
        return std::list<int>();
    }
    std::list<int> result;
    int carry = 0;

    while (!num1.empty() || !num2.empty() || carry) {
        int sum = carry;
        if (!num1.empty()) {
            sum += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            sum += num2.back();
            num2.pop_back();
        }

        carry = sum / 10;
        result.push_front(sum % 10);
    }
    if (result.front() == 0){
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    if (num1.empty() || num2.empty()) {
        return std::list<int>();
    }
    std::list<int> result;
    int borrow = 0;

    while (!num1.empty() || !num2.empty()) {
        int x = borrow;
        if (!num1.empty()) {
            x += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            x -= num2.back();
            num2.pop_back();
        }

        if (x < 0) {
            x += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }

        result.push_front(x);
    }

    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    if (num1.empty() || num2.empty()) {
        return std::list<int>();
    }
    std::list<int> result;
    int carry = 0;

    while (!num1.empty()|| carry){
        int product = 0;
        if (!num1.empty()){
        product = num1.back()*num2.back();
        num1.pop_back();
        }
        int num = product+carry;
        result.push_front(num%10);
        carry = num/10;
        
    }
    if (result.front() == 0){
        result.pop_front();
    }

    return result;
}