#include "Reverser.h"


int Reverser::reverseDigit(int value){
    int num = 0;
    
    if(value <0){
        return -1;
    }
    if(value/10 == 0){
        return value;
    }
    num = value%10;
    
    return num*pow10(value)+reverseDigit(value/10);
}

int Reverser::pow10(int number){
    int result = 1;
    while(number>0){
        number = number/10;
        result = result*10;
    }
    return result/10;
}

string Reverser::reverseString(string characters){
    if (characters.empty()) {
        return "";
    }

    char lastChar = characters.back();
    characters.pop_back();

    return std::string(1, lastChar) + reverseString(characters);
}
