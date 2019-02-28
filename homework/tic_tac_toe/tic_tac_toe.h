#include<string>
#include<vector>

using std::string;
using std::vector;


class TicTacToe 
{
public:

	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int postition);
	void display_board() const;


private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();

	std::string next_player;
	vector<string> pegs = {9, " "};
};