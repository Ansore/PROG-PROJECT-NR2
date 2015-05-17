//
// Created by Ansore on 10-05-2015.
//

#ifndef BOARD_H_
#define BOARD_H_

#include <string>
#include <vector>
#include "Ship.h"
#include "Bomb.h"


class Board {
public:

    Board(const std::string &filename); // loads board from file 'filename'
    bool putShip(const Ship &ship); // adds ship to the board, if possible
    void moveShips(); // tries to randomly move all the ships of the fleet
    bool attack(const Bomb &b);

    void display() const; // displays the colored board during the game
    void show() const; // shows the attributes of the board (for debugging)
    bool isValidPosition(const Ship ship);
    unsigned int getShipPart(Ship ship, int line, int column) const;
// OTHER METHODS, if necessary
// ...
private:
    unsigned int numLines, numColumns;// redundant info �
    Ship removeShip(size_t index);
    std::vector <Ship> ships; // ships that are placed on the board
    std::vector <std::vector <int> > board; // each element indicates
// the index of a ship in the 'ships' vector
// (in the range 0..ships.size()-1) ;
// -1 is used to represent the sea

    unsigned int getShipPart(Ship ship, int line, int column);
};


#endif //BOARD_H_

