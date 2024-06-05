#include<iostream>
#include<unordered_set>
#include<iterator>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    s.insert("Prateek");
    s.insert("Jain");
    s.insert("Pankaj");
    s.insert("Ankit");
    unordered_set<string>::iterator x;
    for(x=s.begin();x!=s.end();x++)
        cout<<*x<<" ";
    cout<<"\n";
    string key = "Prateek";
    if(s.find(key)==s.end())
        cout<<"Key Not found !\n";
    else
        cout<<"Key found !\n";
    return 0;
}