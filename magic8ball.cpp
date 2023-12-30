#include <iostream>
#include <cstdlib>

int main(){
  std::cout<<"MAGIC 8-BALL: \n";

  srand(time(NULL));
  int a= std::rand() % 10 ;

  std::cout<<a<<"\n";
  switch(a){
    
    case 0:
    std::cout<<"It is certain.\n";
    break;

    case 1:
    std::cout<<"Very doubtful.\n";
    break;

    case 2:
    std::cout<<"Good luck.\n";
    break;

    case 3:
    std::cout<<"My sources say no.\n";
    break;

    case 4:
    std::cout<<"It is uncertain.\n";
    break;

    case 5:
    std::cout<<"Ask again later.\n";
    break;

    case 6:
    std::cout<<"Cannot predict now.\n";
    break;

    case 7:
    std::cout<<"Yes.\n";
    break;

    case 8:
    std::cout<<"Outlook not so good.\n";
    break;

    case 9:
    std::cout<<"Better not tell you now.\n";
    break;

    default:
    std::cout<< "";
    break;
  }

}
