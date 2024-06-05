#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,0};
    if(arr.empty())
        cout<<"Array is empty\n";
    else    
        cout<<"Array is not empty\n";
    return 0;
}