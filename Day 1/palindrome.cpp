#include<iostream>
using namespace std;
bool isPalindrome(int x){
  if(x<0 || (x%10 == 0 && x!=0)){
    return false;
  }
  int rev_half = 0;
  while(x>rev_half){
    rev_half = rev_half*10 +x%10;
    x/=10;
  }
  return x == rev_half || x==rev_half/10;
}
int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  if(isPalindrome(n)){
    cout<<"The given number is palindrome"<<endl;
  } else{
    cout<<"The given number is not palindrome"<<endl;
  }

    return 0;
}