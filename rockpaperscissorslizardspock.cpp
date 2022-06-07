#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

string computerMove(){
  unsigned seed = time(0);
  srand(seed);
  string possible_moves[] = {"rock","paper","scissors","lizard","spock"};
  return possible_moves[rand() % (4+1)];
}



int main(){

  
  string s;

  cout<<"Welcome to Rock, Paper, Scissors, Lizard, Spock!\n";
  cout<<"This is a Rock, Paper, Scissors spinoff inspired by Big Bang Theory.\n"<<endl;

  string moves[]={"rock","paper","scissors","lizard","spock"};
  string input = "";
  bool valid = 0;



  int moves_length = 5;

  while(valid == 0){
    cout<<"Enter your move.(Make sure it is all lower case): ";
    getline(cin,input);
    for(int i = 0; i<moves_length;i++){
      if(input==(moves[i])){
        cout<<"You have choosen "<<input<<endl;
        valid = 1;
        break;
      }
    }
  }

  string cm = computerMove();
  cout<<"The computer chooses "<<cm<<endl<<endl;

  if(cm == input){
    cout<<"You tie!";  
  }
  else if(input == "rock" && cm == "paper"){
    cout<<"Paper covers Rock, You Lose!";
  }
  else if(input == "rock" && cm == "spock"){
    cout<<"Spock vaperizes Rock, You Lose!";
  }
  else if(input == "paper" && cm == "rock"){
    cout<<"Paper covers Rock, You Win!";
  }
  else if(input == "spock" && cm == "rock"){
    cout<<"Spock vaperizes Rock, You Win!";
  }
    
  else if(input == "paper" && cm == "scissors"){
    cout<<"Scissors cuts Paper, You Lose!";
  }
  else if(input == "paper" && cm == "lizard"){
    cout<<"Lizard eats Paper, You Lose!";
  }
  else if(input == "scissors" && cm == "paper"){
    cout<<"Scissors cuts Paper, You Win!";
  }
  else if(input == "lizard" && cm == "paper"){
    cout<<"Lizard eats Paper, You Win!";
  }

  else if(input == "scissors" && cm == "rock"){
    cout<<"Rock crushes Scissors, You Lose!";
  }
  else if(input == "scissors" && cm == "spock"){
    cout<<"Spock smashes Scissors, You Lose!";
  }
  else if(input == "rock" && cm == "scissors"){
    cout<<"Rock crushes Scissors, You Win!";
  }
  else if(input == "spock" && cm == "scissors"){
    cout<<"Spock smashes Scissors, You Win!";
  }

  else if(input == "spock" && cm == "lizard"){
    cout<<"Lizard poisons Spock, You Lose!";
  }
  else if(input == "spock" && cm == "paper"){
    cout<<"Paper disproves Spock, You Lose!";
  }
  else if(input == "lizard" && cm == "spock"){
    cout<<"Lizard poisons Spock, You Win!";
  }
  else if(input == "paper" && cm == "spock"){
    cout<<"Paper disproves Spock, You Win!";
  }

  else if(input == "lizard" && cm == "rock"){
    cout<<"Rock crushes Lizard, You Lose!";
  }
  else if(input == "lizard" && cm == "scissors"){
    cout<<"Scissors decapitates Lizard, You Lose!";
  }
  else if(input == "rock" && cm == "lizard"){
    cout<<"Rock crushes Lizard, You Win!";
  }
  else if(input == "scissors" && cm == "lizard"){
    cout<<"Scissors decapitates Lizard, You Win!";
  }

  
 

  return 0;
}
