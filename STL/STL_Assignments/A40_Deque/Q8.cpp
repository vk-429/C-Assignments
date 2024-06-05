#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={1,2,3,4,5,6,7,8,9,10};
    for(auto x:d1)cout<<x<<" ";cout<<'\n';
    d1.erase(d1.begin()+5);
    for(auto x:d1)cout<<x<<" ";cout<<'\n';
    d1.erase(d1.begin(),d1.begin()+2);
    for(auto x:d1)cout<<x<<" ";cout<<'\n';
    return 0;
}