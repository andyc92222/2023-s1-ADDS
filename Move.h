#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
    public:
        virtual std::string getName()= 0;
        virtual bool win(Move* a) = 0;
};

class Rock : public Move {
    public:
        std::string getName() override {return "Rock";}
        bool win(Move* a);
};

class Paper : public Move {
    public:
        std::string getName() override {return "Paper";}
        bool win(Move* a);
};

class Scissors : public Move {
    public:
        std::string getName() override {return "Scissors";}
        bool win(Move* a);
};

class Robot : public Move {
    public:
        std::string getName() override {return "Robot";}
        bool win(Move* a);
};

class Monkey : public Move {
    public:
        std::string getName() override {return "Monkey";}
        bool win(Move* a);
};

class Pirate : public Move {
    public:
        std::string getName() override {return "Pirate";}
        bool win(Move* a);
};

class Ninja : public Move {
    public:
        std::string getName() override {return "Ninja";}
        bool win(Move* a);
};

class Zombie : public Move {
    public:
        std::string getName() override {return "Zombie";}
        bool win(Move* a);
};



#endif