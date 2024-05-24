
//program to make a array from user input

#include <iostream>
using namespace std;
int main(){
  int num[7];
  int i,sum=0;
  
  //first loop for array input
  
  for(i=0;i<5;i++)
  {
  cout<<"Enter the value "<<(i+1)<<":::";
  cin>>num[i];
  }
  
  cout << "\nThe elements are ::: ";
  
  //second loop for.creatimg array
  
  
  for(i=0;i<5;i++)
  {
    cout<<" "<<num[i];

  }
  return 0;
}