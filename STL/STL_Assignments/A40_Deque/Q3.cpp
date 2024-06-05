#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={1,2,3,4,5};
    deque<int>::reverse_iterator rit;
    rit=d1.rend();
    if(rit!=d1.rbegin())
    {
        cout<<"Reverse iterator pointing to the position before the begining of the Deque.\n";
    }
    return 0;
}