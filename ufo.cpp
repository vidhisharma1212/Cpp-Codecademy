#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

int main() {
  greet();
  std::string codeword="codeacademy";//the codeword
  std::string answer="___________";

  char letter;
  int misses=0;
  vector<char> incorrect;
  bool guess=false;

  while (answer!=codeword && misses<7){
    misses++;

    display_misses(misses);
    display_status(answer,codeword, incorrect);
    cout<<"Please enter your guess: ";
    cin>>letter;
    for (int j=0; j<codeword.size(); j++){
      if (letter==codeword[j]){
        answer[j]==letter;
        guess= true;
      }
    }

    if (guess==true){cout<<"Correct! \n";}
    else{
      cout<<"Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess=false;

  }

  end_game(answer,codeword);
}
