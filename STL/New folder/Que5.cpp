#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5> arr={2,4,8,10,9};
    array<int,5>::reverse_iterator it;
    for(it=arr.rbegin();it!=arr.rend();it++)
        cout<<*it<<" ";
    cout<<"\n";
    return 0;
}