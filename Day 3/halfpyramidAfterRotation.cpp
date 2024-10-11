#include<iostream>
using namespace std;
void halfPyramid(int x){
  for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
      if(j<=x-i){
        cout<<" ";
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
}
int main()
{
  int n;
  cout<<"Enter the input: ";
  cin>>n;
  halfPyramid(n);
    return 0;
}