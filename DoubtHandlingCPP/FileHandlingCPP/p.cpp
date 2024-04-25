#include<iostream>
#include<string>
using namespace std;
int main()
{
    string mystring="Hello, world";
    string str="Hello bro";
    mystring.append(str);
    str.append(mystring);
    cout<< mystring<<endl;
    cout<<str<<endl;
    return 0;
}