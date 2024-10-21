#include<iostream>
using namespace std;
int sumofNaturalNo(int x){
  if(x<=1)
  return x;

 return x+ sumofNaturalNo(x-1);
  
}
int main()
{
  int n;
  cin>>n;
  cout<<"Sum of "<<n<<" is "<<sumofNaturalNo(n)<<endl;
    return 0;
}