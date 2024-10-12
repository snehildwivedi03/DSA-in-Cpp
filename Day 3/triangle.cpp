#include<iostream>
using namespace std;
void triangle(int x){
  for(int i=1;i<=x;i++){
    for(int j=1;j<=x-i;j++){
      cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main()
{
  int n;
  cout<<"Enter the input: ";
  cin>>n;
  triangle(n);
    return 0;
}