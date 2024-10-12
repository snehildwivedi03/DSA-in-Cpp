#include<iostream>
using namespace std;
int sumOfDigits(int n){
  if(n==0){
    return 0;
  }
  return (n%10) + sumOfDigits(n/10);
}
int main()
{
  int x;
  cout<<"Enter the number: ";
  cin>>x;
  cout<<"Sum of digits of the number is: "<<sumOfDigits(x);
    return 0;
}