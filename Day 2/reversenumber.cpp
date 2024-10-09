#include<iostream>
int reverseNumber(int x){
  int reversed = 0;
  while(x !=0){
    int digit = x%10;
    reversed = reversed*10 + digit;
    x/=10;
  }
  return reversed;
}
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    int reversedNo = reverseNumber(num);
    cout<<"The reversed number is: "<<reversedNo<<" "<<endl;
    return 0;
}