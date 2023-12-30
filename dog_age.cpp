#include <iostream>

int main() {
  int dog_age=11; // this is my dog's age
  
  int early_years, later_years, human_years;
  early_years=21; //first 2 years
  later_years= (dog_age-2)*4;
  human_years= early_years+later_years;
  std::cout<<"My name is Jimmy! Ruff ruff, I am\n"<<human_years<<" years old in human years.";
}