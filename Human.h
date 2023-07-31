#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(const std::string& name = "Human");
    char makeMove() override;
    std::string getName() override;

private:
    std::string name;
};

#endif