#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={1,2,3,4,5};
    deque<int>::const_iterator cit;
    cit=d1.begin();
    cout<<*cit<<"\n";
    return 0;
}