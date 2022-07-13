#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int randomInt();

struct root{
  int num;
  root *left;
  root *right;

  root(int val): num(val), left(nullptr), right(nullptr){}
};

int count = 0;

int main() {
  bool larger = false;
  root roo(randomInt());
  int c = 1;
  for(int i =0; i<2; i++){\
    int r = randomInt();
    root n(r);
    if(r>(roo.num)){
      roo.right = &n;
      larger = true;
    }
    else
      roo.left = &n;
  }
  cout<<roo.num<<endl;
  if (larger == true)
    cout<<roo.right->num<<endl;
  else
    cout<<roo.left->num<<endl;






  return 0;
}


int randomInt(){
  int a = 0;
  if (count == 0){
    unsigned seed = time(0);
    srand(seed);
    a = rand() % 5000;
  }
  else{
    a = rand() % 5000;
  }
  count++;
  return(a);
}
