#include<string>
#include<vector>

using std::string;
using std::vector;


class TicTacToe 
{
public:
	void start_game(std::string first_player);
	std::string get_player() const;

private:
	void set_next_player();
	bool check_column_win();



	std::string next_player;
	vector<string> pegs = ( " ", " ", " ", " ", " ", " " , " ", " ", " " );

};