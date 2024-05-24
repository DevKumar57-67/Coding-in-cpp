// program to find average of array 

#include <iostream>
using namespace std;
int main(){
  int a[5];

  int i;
  for(i=0;i<5;i++)
  {
  cout << "Enter 5 values to find average   ";
  cin>>a[i];
  }
  
  int s = 0;
  for(i=0;i<5;i++)
  {
    s = s + a[i];
    
  }
  
  int avg = s/5;
  cout << " Avrage is :::"<<avg;
  return 0;
}