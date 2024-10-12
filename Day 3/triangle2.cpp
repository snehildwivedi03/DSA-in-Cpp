#include<iostream>
using namespace std;
void triangle(int x){
  for(int i=1;i<=x;i++){
    for(int j=x-i;j>0;j--){
      cout<<" ";
    }
    for(int k=1;k<=i;k++){
      cout<<"* ";
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