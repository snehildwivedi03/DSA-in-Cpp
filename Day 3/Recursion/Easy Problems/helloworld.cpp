#include<iostream>
using namespace std;
void helloworld(int n){
  if (n==0){
    return ;
  }
  cout<<"Hello, World!"<<endl;
  helloworld(n-1);
}
int main()
{
  int n;
  cout<<"Enter a number: "<<endl;;
  cin>>n;
  helloworld(n);
    return 0;
}