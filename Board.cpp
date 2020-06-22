#include "board.h"

Board::Board() {

}
void Board::display() {
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			std::cout << boardWithPlayers[i][k];
		}
		std::cout << std::endl;
	}
}