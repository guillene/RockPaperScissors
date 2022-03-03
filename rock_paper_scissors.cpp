/* This is an implementation of Rock, Paper, Scissors.

#########################################
### GAME RULES                        ###
#########################################
- Scissors cuts Paper.
- Paper covers Rock.
- Rock crushes Scissors.

*/

#include <iostream>
#include <string>

#include "utils.h"

using namespace std;

int main(){
  srand(time(NULL));
  
  int computer = rand () % 3 + 1;
  int user = 0;

  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";
 
  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";

  cout << "shoot! ";
  cin >> user;
  
  //Validate user input
  if (user < 1 || user > 3){
    cerr << "Invalid selection, please try again";
    exit(1);
  }

  // Print Game
  cout << getEmoji(user) << " vs " << getEmoji(computer) << endl ;
  
  // Validate if tie, the only option of having 
  // a tie is if sum of inputs are even 
  // thanks to the enum starting in 1
  if ( (user + computer) % 2 == 0 ){
    
    cout << "It's a TIE";
    
  } else {
    //Evaluate non-tie game results
      switch(user){
        case rock:
          if(computer == scissors){
            cout << "You Win!\n" ;
          }else{
            cout << "You Loose!\n";
          }
          break;
        case paper:
          if(computer == rock){
            cout << "You Win!\n";
          }else{
            cout << "You Loose!\n";
          }
          break;
        case scissors:
          if(computer == paper){
            cout << "You Win!\n";
          }else{
            cout << "You Loose!\n";
          }
          break;
        default:
          cout << "Unexpected choice, You must be Hacker! " << endl;
      }
    }

}
