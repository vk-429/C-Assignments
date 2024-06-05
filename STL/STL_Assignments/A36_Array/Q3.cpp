#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,0};
    cout<<arr.front()<<"\n";
    cout<<arr.back()<<"\n";
    return 0;
}