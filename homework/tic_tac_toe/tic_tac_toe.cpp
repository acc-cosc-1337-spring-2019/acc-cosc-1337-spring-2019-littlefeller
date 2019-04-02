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
		set_winner();
		clear_board();
		return true;
	}
	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	if (game_over() == false)
	{
		set_next_player();
	}

}

/*
void TicTacToe::display_board() const
{
	cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << "\n";
	cout << pegs[3]<< "|" << pegs[4]<< "|" << pegs[5]<< "\n";
	cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << "\n";
}
*/

std::istream & operator>>(std::istream & in, TicTacToe & t)
{

	int x;
	cout << "Enter position for " << t.next_player << ": ";
	in >> x;
	t.mark_board(x);

	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{

	out << t.pegs[0] << "|" << t.pegs[1] << "|" << t.pegs[2] << "\n";
	out << t.pegs[3] << "|" << t.pegs[4] << "|" << t.pegs[5] << "\n";
	out << t.pegs[6] << "|" << t.pegs[7] << "|" << t.pegs[8] << "\n";

	return out;
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
	
	return false;
}


bool TicTacToe::check_row_win()
{
	
	return false;
}



bool TicTacToe::check_diagonal_win()
{
	
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

void TicTacToe::set_winner()
{
	if (check_row_win() || check_diagonal_win() || check_column_win())
	{
		winner = next_player;
	}
	else
	{
		winner = "C";
	}
}

std::string TicTacToe::get_winner()
{
	return winner;
}

