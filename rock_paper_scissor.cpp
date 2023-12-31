//TO BE CORRECTED

/*
This is the game rock,paper and scissors.
It is you vs computer
*/

#include <iostream>

int main(){
  // generating a random choice for our computer
  srand (time(NULL));
  int comp= (rand()%3) +1 ; //so that the options are only 1,2 or 3.

  std::cout<<"WELCOME TO ROCK, PAPER AND SCISSORS!\n\nEnter a choice from the following\n\n1)Rock 🪨\n2)Paper 📄\n3)Scissors ✂️\n";

  int ans;
  std::cout<<"shooooooooot-> ";
  std::cin>> ans;

  std::string op,cp;

  if (comp==1){ // if computer had 1 (rock)
  cp="rock";
    if (ans==1){
      op= "tie";
    }
    else if (ans==2){
      op="you won";
    }
    else {
      op="you lost";
    }
  }

  if (comp==2){ // if computer had 2 (paper)
  cp="paper";
    if (ans==2){
      op= "tie";
    }
    else if (ans==3){
      op="you won";
    }
    else {
      op="you lost";
    }

    if (comp==3){ // if computer had 3 (scissors)
    cp="scissors";
    if (ans==3){
      op= "tie";
    }
    else if (ans==1){
      op="you won";
    }
    else {
      op="you lost";
    }
  }
  }

  std::cout<<"Since the computer played "<<cp<<" "<<op<<"\n";

}
