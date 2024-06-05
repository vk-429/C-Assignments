#include<iostream>
#include<array>
#include<unordered_map>
using namespace std;

void findodd(array<int,20> nums,int size)
{
    unordered_map<int,int> count;
    for(auto x:nums)
    {
        count[x]++;
    }
    cout<<"Element : Odd Occurrences\n\n";
    for(auto pair:count)
    {
        if(pair.second%2==1)
        {
            cout<<pair.first<<" : "<<pair.second<<"\n";
        }
    }
}
int main()
{
    array<int,20> arr={1,1,1,2,3,3,3,3,3,4,5,6,7,8,8,9,0,0,0,0};
    findodd(arr,20);
    return 0;
}
