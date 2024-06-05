#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
    forward_list<int> fl1={3,2,9};
    forward_list<int> fl2={8,1,2};
    for(auto x:fl1)cout<<x<<" ";
    cout<<'\n';
    for(auto x:fl2)cout<<x<<" ";
    cout<<'\n';
    fl1.swap(fl2);
    cout<<"\nAfter Swapping :-\n";
    for(auto x:fl1)cout<<x<<" ";
    cout<<'\n';
    for(auto x:fl2)cout<<x<<" ";
    cout<<'\n';
    return 0;
}