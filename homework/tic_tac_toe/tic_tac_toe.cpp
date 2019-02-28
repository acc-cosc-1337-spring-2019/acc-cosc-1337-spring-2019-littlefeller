#include "tic_tac_toe.h"
#include<iostream>
using std::cin;
using std::cout;


// pub***************************

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
	if(check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		clear_board();
		return true;
	}
	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

void TicTacToe::display_board() const
{
	cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << "\n";
	cout << pegs[3]<< "|" << pegs[4]<< "|" << pegs[5]<< "\n";
	cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << "\n";
}




// priv***************************

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
	return false;
}


bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 7; i+=3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}



bool TicTacToe::check_diagonal_win()
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

void TicTacToe::clear_board()
{
	for (auto peg : pegs)
	{
		peg = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}


