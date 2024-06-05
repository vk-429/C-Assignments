#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    //cout<<v.size()<<"\n";
    //cout<<v.capacity()<<"\n";
    //v.push_back(1);
    //cout<<v.size()<<"\n";
    //cout<<v.capacity()<<"\n";
    for(int i=0;i<5;i++)
        v.push_back(i*100);
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<"\n";
    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n";
    //cout<<get<0>(v);

    v.resize(3);
    v.pop_back();
    v.shrink_to_fit();
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<"\n";
    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n";

    if(v.empty())
        cout<<"Vector is Empty\n";
    else 
        cout<<"Vector is not Empty\n";
    return 0;
}