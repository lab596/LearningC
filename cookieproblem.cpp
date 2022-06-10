#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int ate = 0;
  const int CAL = 240/3;   //calories per serving

  cout<<"Enter how many cookies you ate: ";
  cin >> ate;
  cout<<endl;

  cout<<"Cookie Report\n";
  cout<<"==============\n"<<endl;
  cout<<"Ate \tTot Cal\n";
  cout<<"--- \t--------\n";
  cout<<ate<<" \t\t"<< ate*CAL<<endl;
  
  //rounding up
  ate = ceil(ate * 1.1);
  cout<<ate<<" \t\t"<< ate*CAL<<endl;

  ate = 30;
  cout<<ate<<" \t\t"<< ate*CAL<<endl<<endl;

  cout<<"End of Report."<<endl;
  
  return 0;
}
