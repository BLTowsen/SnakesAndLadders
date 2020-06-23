#include "board.h"

Board::Board(int numPlayers) {
	for (int i = 0; i < numPlayers; i++) {
		//create player object
		Player *player = new Player();
		players.push_back(player);
	}
}
void Board::display() {
	system("CLS");
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			std::cout << boardWithPlayers[i][k];
		}
		std::cout << std::endl;
	}
}

void Board::update() {

}