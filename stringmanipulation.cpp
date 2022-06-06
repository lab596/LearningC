#include<iostream>
using namespace std;



int main(){
  string s;

  cout<<"Enter a string: ";

  //getting user input - s is name of variable info is stored
  getline(cin,s);

  //endl - will flush output buffer and insert a new line
  cout<<"You have entered: ";
  cout<<s<<endl;

  //using push back - MUST HAVE SINGLE QUOTES
  //pushback - adds character to end of string
  s.push_back('Y');
  cout<<"After using push back "<<s<<endl;

  //popback removes last character from string
  s.pop_back();
  cout<<"After using pop back function "<<s<<endl;
  
  return 0;
}
