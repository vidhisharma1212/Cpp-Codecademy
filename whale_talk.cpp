/*
Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".

There are a few simple rules for translating text to whale language:

There are no consonants. 
The u‘s and e‘s are extra long, so we must double them.
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

  // Whale, whale, whale.
  // What have we got here?

  std::string s;
  cout<<"Enter a string here: ";
  getline(cin,s);

  std::vector<char> v={'a','e','i','o','u'};
  std::vector<char> ne;

  for (int i=0;i<s.size(); i++){
    for (int j=0; j<v.size(); j++){
      if (s[i]==v[j]){
        ne.push_back(s[i]);
        if (s[i]=='u' || s[i]=='e'){
          ne.push_back(s[i]);
        }
      }
    }
  }

  // checking the result-
  for (int i=0; i<ne.size(); i++){
    cout<<ne[i];
  }
  cout<<"\n";
}
