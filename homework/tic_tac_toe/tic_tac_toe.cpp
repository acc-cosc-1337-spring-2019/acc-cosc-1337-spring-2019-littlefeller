#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}
bool TicTacToe::check_column_win()
{
	if (pegs[0] == pegs[3] == pegs[6] == "X" || pegs[0] == pegs[3] == pegs[6] == "O")
	{
		return true;
	}
	if (pegs[1] == pegs[4] == pegs[7] == "X" || pegs[1] == pegs[4] == pegs[7] == "O")
	{
		return true;
	}
	if (pegs[2] == pegs[5] == pegs[8] == "X" || pegs[2] == pegs[5] == pegs[8] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}
