#include <iostream>
#include "../include/user_solver.h"

void UserSolver::solve(Board &board) {
    //used to track how many ships you hit
    size_t hitCounter = 0;

    //Loop through the entire board until you hit all the ships
    for (size_t i = 0; i < board.getX() && hitCounter < board.getShipCount(); i++) {
        for (size_t j = 0; j < board.getY() && hitCounter < board.getShipCount(); j++) {
            // if there is a hit, add to the hit counter
            if (guess(i, j, board) == hit)
            {
                hitCounter++;
            }
        }
    }
    

}
