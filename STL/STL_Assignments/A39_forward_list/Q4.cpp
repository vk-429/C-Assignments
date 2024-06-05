#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
    forward_list<int> fl={1,2,3,4,5};
    for(auto x:fl)cout<<x<<" ";
    cout<<'\n';
    fl.reverse();
    for(auto x:fl)cout<<x<<" ";
    cout<<'\n';
    // reverse(fl.begin(),fl.end());//it requires bidirectional iterator
    // for(auto x:fl)cout<<x<<" ";
    // cout<<'\n';
    return 0;
}