#include<iostream>
using namespace std;
void hollowRectangle(int r, int c){
  for(int i=1;i<=r;i++)
{
  for(int j=1;j<=c;j++){
    if(i==1 || i==r || j==1 || j==c){
      cout<<"* ";
    }
    else{
      cout<<"  ";
  }
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
    hollowRectangle(row,col);
    return 0;
}