#include<iostream>
#include<stdexcept>
using namespace std;
int minArr(int a[],int n){
  if(n==0){
    throw invalid_argument("Array is empty");
  }
  if(n==1){
    return a[0];
  }
  int restMin = minArr(a+1,n-1);
if(a[0]<restMin){
  return a[0];
}
else{
  return restMin;
}
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>a[i];
  }
  cout<<"Minimum Element is the array is: "<<minArr(a,n)<<endl;
    return 0;
}