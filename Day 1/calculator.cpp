#include<iostream>
using namespace std;
int main()
{
 char op;
 cout<<"Enter the operand '+','-','*','/': ";
 cin>>op;
 float a,b;
 cout<<"Enter two numbers: ";
 cin>>a>>b;
if(b==0 && op=='/'){
  cout<<"Cannot divide by 0";
  exit(0);
}
/*
Using switch for implementatiion of basic calculator
We can use if else for this implementation
*/
 switch(op){
  case'+' :
  cout<<a<<" + "<<b<<" = "<<a+b<<endl;
  break;

    case'-' :
  cout<<a<<" - "<<b<<" = "<<a-b<<endl;
  break;

    case'*' :
  cout<<a<<" * "<<b<<" = "<<a*b<<endl;
  break;

    case'/' :
  cout<<a<<" / "<<b<<" = "<<a/b<<endl;
  break;

  default:
  cout<<"Enter the valid operator";
  break;
 }

    return 0;
}