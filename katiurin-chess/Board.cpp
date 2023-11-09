#include "Board.h"

void Board::setStartPosition() {
	//Pawns
	for (int i = 0; i < 8; i++) {
		board[1][i] = 1;
		board[6][i] = 1;	
	}
	//Rooks
	board[0][0] = 4;
	board[0][7] = 4;
	board[7][0] = 4;
	board[7][7] = 4;
	//Knights
	board[0][1] = 2;
	board[0][6] = 2;
	board[7][1] = 2;
	board[7][6] = 2;
	//Bishops
	board[0][2] = 3;
	board[0][5] = 3;
	board[7][2] = 3;
	board[7][5] = 3;
	//Queen
	board[0][3] = 5;
	board[7][3] = 5;
	//King
	board[0][4] = 6;
	board[7][4] = 6;
	board.print();
}