#ifndef REVERSE_H
#define REVERSE_H
#include <string>
using namespace std;
class Reverser{
    public:
        int reverseDigit(int value);
        string reverseString(string characters);
    private:
        int pow10(int number);

};
#endif