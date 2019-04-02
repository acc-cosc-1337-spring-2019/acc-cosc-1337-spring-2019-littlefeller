#include "tic_tac_toe_4.h"
//cpp

bool TicTacToe4::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}


bool TicTacToe4::check_row_win()
{
	for (std::size_t i = 0; i < 7; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}



bool TicTacToe4::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
	{
		return true;
	}
	return false;
}