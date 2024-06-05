#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(auto& x:vec)sum+=x;
    cout<<"sum = "<<sum<<'\n';
    return 0;
}