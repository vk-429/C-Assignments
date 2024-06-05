#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<char> d1={1,2,3,4,5};
    size_t size=d1.max_size();
    cout<<"Maximum Size = "<<size<<"\n";
    cout<<"Maximum Size = "<<d1.max_size()<<"\n";
    return 0;
}