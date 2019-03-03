#include "tic_tac_toe_manager.h"
//Write class function implementations here


// pub

void TicTacToeManager::save_game(TicTacToe b) const
{
	//games.push_back(b);
}
/*
void TicTacToeManager::display_history() const
{
	for (auto game : games)
	{
		game.display_board();
		if (game.get_winner() == "X")
		{

		}
	}
}
*/

//priv

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