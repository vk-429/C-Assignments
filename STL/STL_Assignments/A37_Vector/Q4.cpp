#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10},vec2;
    for(auto&x:vec)
        vec2.push_back(x);
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    for(auto& x:vec2)cout<<x<<" ";
    cout<<'\n';
    return 0;
}