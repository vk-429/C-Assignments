#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
    forward_list<int> fl={1,2,2,3,3,3,4,5,5,5};
    for(auto x:fl)cout<<x<<" ";
    cout<<'\n';
    fl.unique();
    for(auto x:fl)cout<<x<<" ";
    cout<<'\n';
    return 0;
}