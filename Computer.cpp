#include "Computer.h"

Computer::Computer() : name("Computer") {}

Move * Computer::makeMove() {
    return new Rock();
}

std::string Computer::getName(){
    return name;
}