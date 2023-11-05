#include <iostream>

int factorial(int n, int result = 1) {
    if (n >= 1) {
        return factorial(n - 1, n * result);
    }

    return result;
}

int main() {
    int number = 5; // Example value for the factorial
    int result = factorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;

    return 0;
}