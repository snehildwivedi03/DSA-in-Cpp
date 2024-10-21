#include<iostream>
using namespace std;
int sumofNN(int x){
  if(x<=1){
    return x;
  }
  int sum = x+ sumofNN(x-1);
  return sum;
}
int main()
{
  int n;
  cin>>n;
  cout<<sumofNN(n);
    return 0;
}