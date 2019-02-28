#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player X") 
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");

}

TEST_CASE("Test first player O")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");

	REQUIRE(tic_tac_toe.get_player() == "O");

}

TEST_CASE("Test win by first column, X wins")
{ 
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column, X wins")
{
	TicTacToe board1;
	board1.start_game("X");
	REQUIRE(board1.game_over() == false);
	board1.mark_board(2);//X         
	REQUIRE(board1.game_over() == false);
	board1.mark_board(1);//O          
	REQUIRE(board1.game_over() == false);
	board1.mark_board(5);//X          
	REQUIRE(board1.game_over() == false);
	board1.mark_board(3);//O          
	REQUIRE(board1.game_over() == false);
	board1.mark_board(8);//X 
	//X wins 
	REQUIRE(board1.game_over() == true);
}

TEST_CASE("Test win by third column, X wins")
{
	TicTacToe board2;
	board2.start_game("X");
	REQUIRE(board2.game_over() == false);
	board2.mark_board(3);//X         
	REQUIRE(board2.game_over() == false);
	board2.mark_board(1);//O          
	REQUIRE(board2.game_over() == false);
	board2.mark_board(6);//X          
	REQUIRE(board2.game_over() == false);
	board2.mark_board(4);//O          
	REQUIRE(board2.game_over() == false);
	board2.mark_board(9);//X 
	//X wins 
	REQUIRE(board2.game_over() == true);
}

TEST_CASE("Test win by first row, X wins")
{
	TicTacToe board3;
	board3.start_game("X");
	REQUIRE(board3.game_over() == false);
	board3.mark_board(1);//X         
	REQUIRE(board3.game_over() == false);
	board3.mark_board(6);//O          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(2);//X          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(5);//O          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(3);//X 
	//X wins 
	REQUIRE(board3.game_over() == true);
}

TEST_CASE("Test win by second row, X wins")
{
	TicTacToe board3;
	board3.start_game("X");
	REQUIRE(board3.game_over() == false);
	board3.mark_board(4);//X         
	REQUIRE(board3.game_over() == false);
	board3.mark_board(7);//O          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(5);//X          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(2);//O          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(6);//X 
	//X wins 
	REQUIRE(board3.game_over() == true);
}

TEST_CASE("Test win by third row, X wins")
{
	TicTacToe board3;
	board3.start_game("X");
	REQUIRE(board3.game_over() == false);
	board3.mark_board(7);//X         
	REQUIRE(board3.game_over() == false);
	board3.mark_board(1);//O          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(8);//X          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(5);//O          
	REQUIRE(board3.game_over() == false);
	board3.mark_board(9);//X 
	//X wins 
	REQUIRE(board3.game_over() == true);
}

TEST_CASE("Test win by diagonal top left to bottom right, X wins")
{
	TicTacToe board4;
	board4.start_game("X");
	REQUIRE(board4.game_over() == false);
	board4.mark_board(1);//X         
	REQUIRE(board4.game_over() == false);
	board4.mark_board(2);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(5);//X          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(3);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(9);//X 
	//X wins 
	REQUIRE(board4.game_over() == true);
}

TEST_CASE("Test win by diagonal top right to bottom left, X wins")
{
	TicTacToe board4;
	board4.start_game("X");
	REQUIRE(board4.game_over() == false);
	board4.mark_board(3);//X         
	REQUIRE(board4.game_over() == false);
	board4.mark_board(2);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(5);//X          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(1);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(7);//X 
	//X wins 
	REQUIRE(board4.game_over() == true);
}

TEST_CASE("Test for no winner")
{
	TicTacToe board4;
	board4.start_game("X");
	REQUIRE(board4.game_over() == false);
	board4.mark_board(1);//X         
	REQUIRE(board4.game_over() == false);
	board4.mark_board(2);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(3);//X          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(5);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(4);//X 
	REQUIRE(board4.game_over() == false);
	board4.mark_board(7);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(6);//X          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(9);//O          
	REQUIRE(board4.game_over() == false);
	board4.mark_board(8);//X 
	//no winner
	REQUIRE(board4.game_over() == true);
}