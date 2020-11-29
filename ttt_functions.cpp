#include <iostream>
#include <vector>

using namespace std;


void print_2d_vector(vector<vector<string>> vect){

  cout << "Tic Tac toe board status: \n\n";
  cout << "===== \n";
  for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
        
    }
    cout << "===== \n";

}

void welcome(){

  cout << "Welcome to C++ Tic tac toe\n";
  cout << "Player 1 starts \nFollowed by player 2\n\n";
  cout << "Let the game begin\n\n";
}


vector<vector<string>> update_vect(vector<vector<string>> vect, int i, int j, bool player1_turn){
  string marker;

  if(player1_turn == true){
    marker = "x";
  }
  else{
    marker = "O";
  }
  

  if(i<=2 && j<=2){
    if(vect[i][j] == "_"){

      vect[i][j] = marker;
    }
    else{
      cout << "Coordinates " << i << " " << j << " already selected\n == NO CHANGE == \n";
    }
  }
  else{
    cout << "Incorrect coordinates " << i << " " << j << "\n == NO CHANGE == \n";
  }

  return vect;    


}

int i_row_chosen(bool player1_turn){
  int i;
  if(player1_turn == true){
    cout << "Player 1, enter your row coordinates for 0 < i <= 2\n";
    cin >> i;
  }
  else{
    cout << "Player 2, enter your row coordinates for 0 < i <= 2\n";
    cin >> i;
  }

  return i;
}


int j_col_chosen(bool player1_turn){
  int j;

  if(player1_turn == true){
    cout << "Player 1, enter your col coordinates for 0 < j <= 2\n";
    cin >> j;
  }
  else{
    cout << "Player 2, enter your col coordinates for 0 < j <= 2\n";
    cin >> j;
  }

  return j;
}



bool update_player_turn(bool player1_turn){

  if(player1_turn == true){
    player1_turn = false;
    cout << "Now it's player 2's turn";
  }
  else{
    player1_turn = true;
    cout << "Now it's player 1's turn";
  }

  return player1_turn;
}


bool check_board_success(vector<vector<string>> vect){

    bool we_have_a_winner = false;
    string winner = " ";

    for (int i = 0; i < vect.size(); i++)
    {
        if((vect[i][0] == vect[i][1]) && (vect[i][1] == vect[i][2]) && (vect[i][0] != "_")){
            we_have_a_winner = true;
            cout << "\nWe have a winner " << vect[i][1] << "\n";
            
            if(vect[i][1] == "x"){
                winner = "Player 1 WINS";
            }
            else if(vect[i][1] == "O"){
                winner = "Player 2 WINS";
            }
            cout << winner << "\n";
        }        
    }   


    for (int j = 0; j < vect.size(); j++)
    {
        if((vect[0][j] == vect[1][j]) && (vect[1][j] == vect[2][j]) && (vect[0][j] != "_")){
            we_have_a_winner = true;
            cout << "\nWe have a winner " << vect[1][j] << "\n";
            
            if(vect[1][j] == "x"){
                winner = "Player 1 WINS";
            }
            else if(vect[1][j] == "O"){
                winner = "Player 2 WINS";
            }
            cout << winner << "\n";
        }        
          
    } 

    // Diagonal

    if((vect[0][0] == vect[1][1]) && (vect[1][1] == vect[2][2]) && (vect[0][0] != "_")){
        we_have_a_winner = true;
        cout << "\nWe have a winner " << vect[1][1] << "\n";

        if(vect[0][0] == "x"){
                winner = "Player 1 WINS";
            }
            else if(vect[0][0] == "O"){
                winner = "Player 2 WINS";
            }
            cout << winner << "\n";
    }
    else if((vect[0][2] == vect[1][1]) && (vect[1][1] == vect[2][0]) && (vect[0][2] != "_")){
        we_have_a_winner = true;
        cout << "\nWe have a winner " << vect[1][1] << "\n";

        if(vect[0][0] == "x"){
                winner = "Player 1 WINS";
            }
            else if(vect[0][0] == "O"){
                winner = "Player 2 WINS";
            }
            cout << winner << "\n";

    }



    return we_have_a_winner;

}

