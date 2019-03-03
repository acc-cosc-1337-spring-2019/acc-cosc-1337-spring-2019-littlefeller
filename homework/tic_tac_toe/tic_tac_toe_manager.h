#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
using std::vector;

//Write class interface here

class TicTacToeManager
{

public:

	TicTacToeManager() : x_win(0), o_win(0) { ties = 0;  }

	void save_game(TicTacToe b) const;
	void display_history() const;

private:
	void update_winner_count(string winner);


	vector<TicTacToe> games;
	int x_win;
	int o_win;
	int ties;




};

#endif // !TIC_TAC_TOE_MANAGER_H
