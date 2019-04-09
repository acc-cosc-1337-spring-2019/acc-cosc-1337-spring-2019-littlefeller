#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout;
//Write class function implementations here


// pub

void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());

}

/*
void TicTacToeManager::display_history() const
{
	
	for (auto game : games)
	{
		game.display_board();
		cout << "\n";
	}
	
	cout << "X wins: " << x_win << "\n";
	cout << "O wins: " << o_win << "\n";
	cout << "Ties: " << ties << "\n";
}
*/

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & t)
{
	for (auto game : t.games)
	{
		out << game;
		out << "\n";
	}

	out << "X wins: " << t.x_win << "\n";
	out << "O wins: " << t.o_win << "\n";
	out << "Ties: " << t.ties << "\n";

	return out;
}


//priv

const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games()
{
	return games;
}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_win;
	o = o_win;
	c = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}

