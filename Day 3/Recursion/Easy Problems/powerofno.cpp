#include<iostream>
using namespace std;
int power(int base, int exp){
  if(exp==0){
    return 1;
  }
  int powR = base*power(base, exp-1);
  return powR;
}
int main()
{
  int base, exp;
  cin>>base>>exp;
  cout<<power(base, exp)<<endl;
    return 0;
}