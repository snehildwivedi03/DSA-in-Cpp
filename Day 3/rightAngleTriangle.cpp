#include<iostream>
using namespace std;
void rightAngleTriangle(int x){
  for(int i=1;i<=x;i++){
    for(int j=1;j<=i;j++){
      if(i-j==0 || i-j<=i-1){
        cout<<"* ";
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
  rightAngleTriangle(n);
    return 0;
}