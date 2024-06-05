#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={1,2,3,4,5};
    for(int x:d1)cout<<x<<" ";
    cout<<"\n";
    d1.assign({6,7,8,9,10});
    for(int x:d1)cout<<x<<" ";
    cout<<"\n";
    return 0;
}