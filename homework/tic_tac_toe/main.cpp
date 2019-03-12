#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<string>
#include<iostream>
using std::cout;
using std::cin;

int main() 
{
	
	std::string play = "n";

	TicTacToeManager g1;

	do {
		TicTacToe game1;
		game1.start_game("X");

		int position1;

		while (game1.game_over() != true)
		{
			
			cin >> game1;

			game1.mark_board(position1);

			cout << game1;

			if (game1.game_over())
			{
				cout << "GAME OVER" << "\n";
				break;
			}

			cout << "Enter position for O: ";
			cin >> position1;
			game1.mark_board(position1);
			cout << game1;
			if (game1.game_over())
			{
				cout << "GAME OVER" << "\n";
				break;
			}
		}
		
		g1.save_game(game1);
		

		cout << "\n";
		cout << "Play again? (enter y to start another game) ";
		cin >> play;

	} while (play == "y");

	cout << "History: \n";

	//g1.display_history();

	return 0;
}
