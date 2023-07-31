#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    
    Human humanPlayer("Andy");
    Computer computerPlayer;

    Referee referee;
    
    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner == &humanPlayer) {
        std::cout << humanPlayer.getName() << " Wins" << std::endl;
    } else if (winner == &computerPlayer) {
        std::cout << computerPlayer.getName() << " Wins" << std::endl;
    } else {
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
}