#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={2,3,4};
    deque<int>::iterator it;
    it=d1.begin();
    it=d1.insert(it,5);
    for(int x:d1)cout<<x<<" ";
    cout<<"\n";
    cout<<*it<<" \n";
    return 0;
}