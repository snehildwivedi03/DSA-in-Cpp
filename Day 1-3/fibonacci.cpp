/*
This code gives the number which will be at that index. For eg. if n=2 then in the fibonacci sequence 1 is at index 2(0 based index). For 6 it will give the output as 6.
*/
#include<iostream>
#include<vector>
using namespace std;
int fibonacci(int n){
  if(n<=1){
    return n;
  }
  if(n<0){
    return -1;
  }
  vector<int> fib(n+1);
  fib[0] = 0;
  fib[1] = 1;
  for(int i=2;i<=n;i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  return fib[n];
}
int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int result = fibonacci(n);
  cout<<"Fibonaaci of "<<n <<" is "<< result<<endl;
    return 0;
}