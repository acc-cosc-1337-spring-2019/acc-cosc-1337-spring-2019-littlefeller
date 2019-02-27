#include "tic_tac_toe.h"




// pub

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if(check_column_win())
	{
		return true;
	}
	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}


// priv

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
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i+6] != " ")
		{
			return true;
		}
	}
}


bool TicTacToe::check_row_win()
{
	if (pegs[0] == pegs[1] == pegs[2] == "X" || pegs[0] == pegs[1] == pegs[2] == "O")
	{
		return true;
	}
	if (pegs[3] == pegs[4] == pegs[5] == "X" || pegs[3] == pegs[4] == pegs[5] == "O")
	{
		return true;
	}
	if (pegs[6] == pegs[7] == pegs[8] == "X" || pegs[6] == pegs[7] == pegs[8] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_diagonal_win()
{
	
}
