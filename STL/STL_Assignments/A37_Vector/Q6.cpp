#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    cout<<"Before :-\n";
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    reverse(vec.begin(),vec.end());
    cout<<"After :-\n";
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    return 0;
}