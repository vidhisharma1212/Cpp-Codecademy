#include <iostream>

int main(){
  int g, h, r, s;

  g=0;
  h=0;
  r=0;
  s=0;

  int ans1, ans2, ans3, ans4;
  std::cout<<"The Sorting Hat Quiz!\n";

  //que 1
  std::cout<<"Q1) When I'm dead, I want people to remember me as:\n\n1) The Good\n2) The Great\n3) The Wise\n4)The Bold\n";
  std::cin>>ans1;

  //que 2
  std::cout<<"QQ2) Dawn or Dusk?\n\n1) Dawn\n2) Dusk\n";
  std::cin>>ans2;

  //que 3
  std::cout<<"Q3) Which kind of instrument most pleases your ear?\n\n1) The violin\n2) The trumpet\n3) The piano\n4) The drum\n";
  std::cin>>ans3;

  //que 4
  std::cout<<"Q4) Which road tempts you most?\n\n1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n";
  std::cin>>ans4;
/*
Checking answers here-
*/
  switch(ans1){
    case 1:
    h+=1;
    break;

    case 2:
    s+=1;
    break;

    case 3:
    r+=1;
    break;

    case 4:
    g+=1;
    break;
  }

  switch(ans2){
    case 1:
    r+=1;
    g+=1;
    break;

    case 2:
    s+=1;
    h+=1;
    break;
  }

  switch(ans3){
    case 1:
    s+=1;
    break;

    case 2:
    h+=1;
    break;

    case 3:
    r+=1;
    break;

    case 4:
    g+=1;
    break;
  }

  switch(ans4){
    case 1:
    h+=1;
    break;

    case 2:
    s+=1;
    break;

    case 3:
    g+=1;
    break;

    case 4:
    r+=1;
    break;
  }

// Checking maximum-

  //assuming gryff has max points
  std::string house;
  int m;

  if (h>s && h>g && h>r){
    house= "hufflepuff";
  }
  
  else if (r>s && r>g && r>h){
    house="ravenclaw";
  }

  else if (s>h && s>g && s>r){
    house="slytherin";
  }

  else if (g>h && g>s && g>r){
    house="gryffindor";
  } 

std::cout<<"You belong to "<< house<< "\n";
}
