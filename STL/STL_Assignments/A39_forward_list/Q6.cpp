#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
    forward_list<int> fl1={1,2,3,4,5};
    forward_list<int> fl2={6,7,8,9,10};
    for(auto x:fl1)cout<<x<<" ";
    cout<<'\n';
    for(auto x:fl2)cout<<x<<" ";
    cout<<'\n';
    fl1.merge(fl2);
    for(auto x:fl1)cout<<x<<" ";
    cout<<'\n';
    return 0;
}