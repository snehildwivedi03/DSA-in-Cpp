#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the size of thr array: ";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
  cout<<"Enter "<<i+1<<"st Element"<<" ";
  cin>>arr[i];
  cout<<"The "<<i+1<<"st"<<" element is: "<<arr[i]<<endl;
 }
    return 0;
}