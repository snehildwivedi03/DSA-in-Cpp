#include<iostream>
using namespace std;
void rectangular(int r, int c){
  for(int i = 1;i<=r;i++){
    for(int j = 1;j<=c;j++){
      cout<<"*";
  }
  cout<<endl;
}
}
int main()
{
  int row,col;
  cout<<"Enter the number of rows: ";
  cin>>row;
  cout<<"Enter the number of columns: ";
  cin>>col;
  rectangular(row,col);
    return 0;
}