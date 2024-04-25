#include<iostream>
using namespace std;
#include<array>

int main()
{
    array<int,0> arr;
    if(arr.empty())
        cout<<"Yes\n";
    else    
        cout<<"No\n";
    return 0;
}