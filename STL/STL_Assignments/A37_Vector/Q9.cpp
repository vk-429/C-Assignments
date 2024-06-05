#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<float> vec;
    vec.push_back(2.1f);
    vec.push_back(2.3f);
    vec.push_back(3.4f);
    vec.push_back(2.7f);
    vec.push_back(1.8f);
    vec.push_back(2.0f);
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    return 0;
}