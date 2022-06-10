#include <iostream>
using namespace std;

int main() {
  
  cout << "Hello World!\n";
  
  //Data types: Boolean, Characters(single character), Integers, Float
  
  int num = 5;
  
  //Arrays syntax: "Data Type" Array_name[num of elements]
  
  int nums[3];

  
  //Strings - 2 ways: C-style - collection of characters in an array/or string object 
  
  string str = "Coffee";

  //if - else - ex.
  
  if(num == 5){
    cout<<"That is the number";
  }
  else{
    cout<<"That is not the number";
  }
  
  //for loop - ex.
  for(int i=0;i<10;i++){
    cout<<"Hello World!";
  }

  //while loop - ex.
  
  while (num < 10){
    cout<<num<<endl;
    num++;
  }

  //casting
  int number = 5;
  double nume = static_cast<double>(number);
  auto product = nume * 21 + 7.5;    //becomes a double due to casting to double
  cout<<product;
  
  return 0;
}

//function syntax: type(void or return type) function_name(parameters)
