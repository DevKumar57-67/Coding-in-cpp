#include <iostream>
#include <algorithm>

using namespace std;
int main(){
  int a[] = {34,45,67,78,199,688,56};
  int n = sizeof(a)/sizeof(a[0]);
  sort (a,a+n);
  
  cout << "min- "<<a[0]<< "max-"<<a[n-1]<<endl;
  return 0;
}
