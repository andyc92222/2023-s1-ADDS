#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move * move1 = player1->makeMove();
    Move * move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) {
        return nullptr;
    }

    if (move1->win(move2)) {
        return player1;
    } else {
        return player2;
    }
}

bool Referee::Win(char move1, char move2) {
    
    if  ((move1 == 'R' && move2 == 'S')|| (move1 == 'S' && move2 == 'P' )|| (move1 == 'P' && move2 == 'R')){
        return true;
    }
    else {
        return false;
    };
}
