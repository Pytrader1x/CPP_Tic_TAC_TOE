

#include <iostream>
#include <vector>
#include "ttt_functions.hpp"
using namespace std;
 
int main()
{
  int i;
  int j;

   bool we_have_a_winner = false;
   bool player1_turn = true;

   vector<vector<string>> vect
    {
        {"_", "_", "_"},
        {"_", "_", "_"},
        {"_", "_", "_"}
    };

    welcome();

    print_2d_vector(vect);

    while(we_have_a_winner == false){
      


      i = i_row_chosen(player1_turn);
      j = j_col_chosen(player1_turn);


      vect = update_vect(vect, i, j, player1_turn);
      print_2d_vector(vect); 
      
      we_have_a_winner = check_board_success(vect);

      if(we_have_a_winner == false){
        cout << "\n == Next turn == \n";
      }
      else{
          return 0;
      }

      player1_turn = update_player_turn(player1_turn);

      

      



    }


  

     
  
    return 0;
}