#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    vec.push_back(15);
    vec.push_back(20);
    vec.push_back(50);
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    return 0;
}