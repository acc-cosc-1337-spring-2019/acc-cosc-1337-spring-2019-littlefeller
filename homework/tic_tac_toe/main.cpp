#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<string>
#include<iostream>
using std::cout;
using std::cin;

int main() 
{
	
	std::string play = "n";

	TicTacToeManager g1;

	do {

		TicTacToe *game1;

		cout << "Do you want to play on a 3x3 or 4x4 board? (3 for 3x3, 4 for 4x4) ";
		int board_size;
		cin >> board_size;

		if (board_size == 3)
		{
			game1 = new TicTacToe3();
		}
		else
		{
			game1 = new TicTacToe4();
		}



		game1->start_game("X");

		while (game1->game_over() != true)
		{
			
			cin >> *game1;

			cout << *game1;

			if (game1->game_over())
			{
				cout << "GAME OVER" << "\n";
				break;
			}

			cin >> *game1;
			cout << *game1;

			if (game1->game_over())
			{
				cout << "GAME OVER" << "\n";
				break;
			}
		}
		
		g1.save_game(*game1);
		

		cout << "\n";
		cout << "Play again? (enter y to start another game) ";
		cin >> play;

	} while (play == "y");

	cout << g1;

	//g1.display_history();

	return 0;
}
