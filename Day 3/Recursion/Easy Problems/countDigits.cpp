#include<iostream>
using namespace std;
int countDigits(int x){
  if(x/10==0){
    return 1;
  }
  return 1 + countDigits(x/10);

}
int main()
{
  int n;
  cin>>n;
  cout<<countDigits(n);
    return 0;
}