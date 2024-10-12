
#include<iostream>
using namespace std;
//function to calculate leap year
/*
A leap year is divisible by 4 then it must be divisible by 100 also by 400. If it is 
divisible by 100 but not 400 then it is not a leap year.


*/
bool isleapyear(int year){
  if(year%4==0){
    if(year%100==0){
      return (year%400==0);
    }
    return true;
  }
  return false;
}
int main()
{
  int year;
  cout<<"Enter a year: ";
  cin>>year;
  if(isleapyear(year)){
cout<<"Year is a leap year"<<endl;
  } else{
    cout<<"Not a leap year"<<endl;
  }
    return 0;
}