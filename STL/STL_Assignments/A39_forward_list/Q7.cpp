#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
    forward_list<int> fl1={3,2,9};
    forward_list<int> fl2={8,1,2};
    fl1.sort();
    fl2.sort();
    fl1.merge(fl2);
    for(auto x:fl1)cout<<x<<" ";
    cout<<'\n';
    return 0;
}