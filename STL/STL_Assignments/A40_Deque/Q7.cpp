#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={1,2,3,4,5};
    cout<<"First Element = "<<d1.front()<<"\n";
    cout<<"Last Element = "<<d1.back()<<"\n";
    return 0;
}