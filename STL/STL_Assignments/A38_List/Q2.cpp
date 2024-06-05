#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> l1;
    vector<int> vec = {1, 2, 3, 4, 5};

    l1.assign({2});
    l1.assign({1,2,3,2,2,2});
    for(auto&x:l1)cout<<x<<" ";
    cout<<"\n";
    //l1.assign({1});
    l1.assign(vec.begin(), vec.end());
    for(auto&x:l1)cout<<x<<" ";
    cout<<"\n";
    l1.assign(5, 10);
    for(auto&x:l1)cout<<x<<" ";
    cout<<"\n";
    return 0;
}