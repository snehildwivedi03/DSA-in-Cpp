#include<iostream>
using namespace std;
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