//header

//header

#include "tic_tac_toe.h"

class TicTacToe4 : TicTacToe
{
public:
	TicTacToe4() : TicTacToe(4) {}

private:

	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};