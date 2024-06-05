#include<iostream>
#include<array>
#include<unordered_map>
using namespace std;

array<int,15> findproduct(array<int,15>& nums,int size)
{
    int n0=0, mult=1;
    array<int,15> ans;
    for(auto& x:nums)
    {
        if(x==0)n0++;
        else mult*=x;
    }
    if(n0==0)
    {
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=mult/nums[i];
        }
    }
    else if(n0==1)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                ans[i]=mult;
            else    
                ans[i]=0;
        }
    }
    else
    {
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=0;
        }
    }
    return ans;
}
int main()
{
    array<int,15> arr={1,1,1,2,3,3,3,3,3,4,5,6,7,8,9},arr1;
    arr1=findproduct(arr,15);
    cout<<"Products:-\n";
    for(auto&x:arr1)cout<<x<<" \n";
    return 0;
}
