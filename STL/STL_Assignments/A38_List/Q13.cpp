#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    
    list<char> mylist;
    char i;
    for(i='a';i<='z';i++)mylist.push_back(i);
    for(char x : mylist)cout<<x<<" ";
    cout<<"\n";
    return 0;
}