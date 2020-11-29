#include <iostream>
#include <vector>

using namespace std;


void print_2d_vector(vector<vector<string>> vect);

void welcome();

vector<vector<string>> update_vect(vector<vector<string>> vect, int i, int j, bool player1_turn);

int i_row_chosen(bool player1_turn);

int j_col_chosen(bool player1_turn);

bool update_player_turn(bool player1_turn);

bool check_board_success(vector<vector<string>> vect);