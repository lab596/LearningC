//Source File Header
// RohanUdupa-ttt.cpp
// Rohan Udupa, CISP 360
// 7/13/22
#include <iostream>
using namespace std;
#include <vector>

void programEnding();
void programGreeting();
bool randStart(int& count);
int compRand(int& num);
void draw(char a[3][3]);
void cmove(vector<int> &c, vector<int> &tot, bool &m, int& num);



int main() {
  programGreeting();

  char loc[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
  draw(loc);

  // Specification C1 - Random Start
  int c = 0;
  bool starter = randStart(c);
  if(starter == true)
    cout<<"The computer has been randomly selected to start.\n";
  else
    cout<<"You have been randomly selected to start.\n";

  vector<int> cmoves{};
  vector<int> pmoves{};
  vector<int> totmoves{};
  int n = 0;
  bool won = false;
  bool tie = false;

  while(won == false && tie == false){
    if(starter == true){
      cmove(cmoves, totmoves, starter,n);
    }
    else if(starter == false){
      
    }
  }
  



  programEnding();
  return 0;
}

void programGreeting(){
  cout<<"RohanUdupa-ttt.cpp opening\n";
  cout<<"Program running...\n";
  cout<<"Author: Rohan Udupa\n";
  cout<<"Due: July 24, 2022\n\n";
}


void programEnding(){
  cout<<"Program complete.";
  int a = 0;
  cin>>a;
}


bool randStart(int& count){
  int a = 0;
  if (count == 0){
    unsigned seed = time(0);
    srand(seed);
    a = rand() % 2;
  }
  else{
    a = rand() % 2;
  }
  count++;
  bool cstart = false;
  if (a == 0)
    cstart = true;
  return cstart;    
}

// Specification C2 - Simple Display
void draw(char a[3][3]){
  cout<<a[0][0]<<"        |"<<a[0][1]<<"        |"<<a[0][2]<<endl;
  cout<<"         |         |    "<<endl;
  cout<<"         |         |\n";
  cout<<"------------------------------\n";
  cout<<a[1][0]<<"        |"<<a[1][1]<<"        |"<<a[1][2]<<endl;
  cout<<"         |         |    "<<endl;
  cout<<"         |         |\n";
  cout<<"------------------------------\n";
  cout<<a[2][0]<<"        |"<<a[2][1]<<"        |"<<a[2][2]<<endl;
  cout<<"         |         |    "<<endl;
  cout<<"         |         |\n\n";
}

// Specification C3 - AI
void cmove(vector<int> &c, vector<int> &tot, bool &m, int& num){
  bool same = true;
  int r = compRand(num);
  while(same == true){
    bool found = false;
    for(int i =0; i< tot.size(); i++){
      if(tot[i] == r)
        found = true;
    }
    if(found == false)
      same = false;
    else
      r = compRand(num);
  }
  tot.push_back(r);
  c.push_back(r);
  m = false;
}

int compRand(int& num){
  int a = 0;
  if (num == 0){
    unsigned seed = time(0);
    srand(seed);
    a = rand() % 9 +1;
  }
  else{
    a = rand() % 9 +1;
  }
  num++;
  return a;
}
