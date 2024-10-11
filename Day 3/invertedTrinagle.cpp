#include<iostream>
using namespace std;
void invertedTriangle(int x){
for(int i=x;i>=1;i--){
  for(int j=1;j<=i;j++){
    cout<<"* ";
  }
  cout<<endl;
}
}
int main()
{
  int n;
  cout<<"Enter the number of columns: ";
  cin>>n;
  invertedTriangle(n);
    return 0;
}