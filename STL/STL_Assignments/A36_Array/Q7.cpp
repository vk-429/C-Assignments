#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,0};
    for(auto&x:arr)cout<<x<<' ';
    cout<<"\n";
    sort(arr.rbegin(),arr.rend());
    for(auto&x:arr)cout<<x<<' ';
    cout<<"\n";
    return 0;
}