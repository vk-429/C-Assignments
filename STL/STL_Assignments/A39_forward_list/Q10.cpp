#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;


int main()
{
    forward_list<int> fl1;
    forward_list<int> fl2={8,1,2};
    for(auto x:fl2)
    {
        fl1.push_front(x);
    }
    for(auto x:fl1)cout<<x<<" ";
    cout<<'\n';
    return 0;
}