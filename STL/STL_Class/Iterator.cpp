#include<iostream>
#include<vector>
#include<tuple>
#include<iterator>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>v2={1,2,3};
    vector<int> v3;
    v3.assign(5,100);
    v3.insert(v3.begin(),23);
    v3.insert(v3.end(),12);
    for(int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";
    cout<<"\n";
    //cout<<v.size()<<"\n";
    //cout<<v.capacity()<<"\n";
    //v.push_back(1);
    //cout<<v.size()<<"\n";
    //cout<<v.capacity()<<"\n";
    for(int i=0;i<5;i++)
        v.push_back(i*100);
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<"\n";
    cout<<"Size = "<<v.size()<<"\n";
    cout<<"Capacity = "<<v.capacity()<<"\n";
    //cout<<get<0>(v);
    //v.resize(4);
    //v.pop_back();
    v.swap(v2);
    v.shrink_to_fit();
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<"\n";
    cout<<"Size = "<<v.size()<<"\n";
    cout<<"Capacity = "<<v.capacity()<<"\n";

    if(v.empty())
        cout<<"Vector is Empty\n";
    else 
        cout<<"Vector is not Empty\n";

//Approach 1

    vector<int>::iterator it;
    //it=v.begin();

    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
    for(auto it=v.rbegin();it!=v.rend();it++)
        cout<<*it<<" ";
    cout<<"\n";
//Approach 2
    it=v.begin();
    for(int i=0;i<v.size();i++)
        cout<<*(it+i)<<" ";
    cout<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<it[i]<<" ";

    
    return 0;
}