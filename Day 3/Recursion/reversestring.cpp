#include<iostream>
using namespace std;
string rev(string s){
    if(s.length() == 0 || s.length()==1){
return s;
    }
    return rev(s.substr(1)) + s[0];
}
int main()
{
    string str;
    cin>>str;
    cout<<rev(str)<<endl;
    return 0;
}