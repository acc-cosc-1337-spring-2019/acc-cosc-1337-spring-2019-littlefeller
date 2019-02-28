#include "tic_tac_toe.h"
#include<string>
#include<iostream>
using std::cout;
using std::cin;

int main() 
{
	
	std::string play = "n";

	do {
		TicTacToe game1;
		game1.start_game("X");

		int position1;

		while (game1.game_over() != true)
		{
			
			cout << "Enter position for X: ";
			cin >> position1;
			game1.mark_board(position1);
			game1.display_board();
			if (game1.game_over())
			{
				cout << "GAME OVER";
				break;
			}

			cout << "Enter position for O: ";
			cin >> position1;
			game1.mark_board(position1);
			game1.display_board();
			if (game1.game_over())
			{
				cout << "GAME OVER";
				break;
			}
		}
		
		cout << "\n";
		cout << "Play again? (enter y to start another game) ";
		cin >> play;

	} while (play == "y");

	return 0;
}