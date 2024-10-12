#include<iostream>
using namespace std;
void numberHalfTriangle(int x){
  for(int i=1;i<=x;i++){
    for(int j=1;j<=i;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int n;
  cout<<"Enter the input: ";
  cin>>n;
  numberHalfTriangle(n);
    return 0;
}