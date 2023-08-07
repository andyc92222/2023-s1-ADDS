#include "Move.h"

bool Rock::win(Move* a) {
    if(a->getName()=="Scissors"){
        return true;
    }
    else{
        return false;
    }
}

bool Paper::win(Move* a){
    if(a->getName()=="Rock"){
        return true;
    }
    else{
        return false;
    }
}
bool Scissors::win(Move* a){
    if(a->getName()=="Paper"){
        return true;
    }
    else{
        return false;
    }
}

bool Robot::win(Move* a){
    if(a->getName()=="Ninja" || a->getName()=="Zombie"){
        return true;
    }
    else{
        return false;
    }
}

bool Monkey::win(Move* a){
    if(a->getName()=="Ninja" || a->getName()=="Robot"){
        return true;
    }
    else{
        return false;
    }
}

bool Pirate::win(Move* a){
    if(a->getName()=="Monkey" || a->getName()=="Robot"){
        return true;
    }
    else{
        return false;
    }
}

bool Ninja::win(Move* a){
    if(a->getName()=="pirate" || a->getName()=="Zombie"){
        return true;
    }
    else{
        return false;
    }
}

bool Zombie::win(Move* a){
    if(a->getName()=="pirate" || a->getName()=="Monkey"){
        return true;
    }
    else{
        return false;
    }
}