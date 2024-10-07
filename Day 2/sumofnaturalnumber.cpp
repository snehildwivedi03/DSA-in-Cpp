#include<iostream>
using namespace std;
int sumofnaturalno(int n){
 int x= n*(n+1)/2;
 return x; 
}
int main()
{
  int n;
  cout<<"Enter the no of terms: ";
  cin>>n;
  cout<<"Sum of first "<<n<<" natural no is: "<<sumofnaturalno(n)<<endl;
    return 0;
}