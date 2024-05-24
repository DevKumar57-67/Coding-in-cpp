// Program to check the number is Armstrong or not

#include <iostream>
using namespace std;
int main(){
  int x,n,sum,r,i;
  cout<<"Enter the number";
  cin>>n;
  x =n;
  sum=0;
  
  // while loop condition
  
  while(n!= 0)
  {
    r = n %10;
    sum=sum+(r*r*r);
    n = n/10;
    
  }
  
  // if else condition 
  
  if(sum==x)
  cout<<"The number is Armstrong";
  else
  cout<<"The number is not Armstrong";
  return 0;
}