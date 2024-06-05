#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> l1({1,2,3,4,5});
    for(auto&x:l1)cout<<x<<" ";
    cout<<"\n";
    list<int> l2({6,7,8,9,10});
    for(auto&x:l2)cout<<x<<" ";
    cout<<"\n";
    l1.merge(l2);
    for(auto&x:l1)cout<<x<<" ";
    cout<<"\n";
    return 0;
}