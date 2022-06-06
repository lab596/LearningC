#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,7,12,9};
  int even=0;
  int odd=0;

  int length=sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<length;i++){
    if(arr[i]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  cout<<"Even numbers: "<<even<<"\n";
  cout<<"Odd numbers: "<<odd<<"\n";
  return 0;
}
