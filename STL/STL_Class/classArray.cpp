#include<iostream>
#include<array>
#include<vector>
#include<tuple>
using namespace std;

int main()
{
    int a[10]={1,2,3,4,5};//c style
    //cin>>a[0];
    //cout<<a[0];
    vector<int> arr(5,0);
    
    array <int,5>ar={1,2,3,4,5};//Array using STL in C++
    array<int,5>ar2={2,4,6,8,10};
    ar.swap(ar2);
    int i=0;
    ar.fill(i);
    for(int i=0; i<ar.size();i++)
        cout<<ar.at(i)<<" ";
        cout<<"\n";
        
        cout<<get<1>(ar)<<"\n";
        cout<<ar.front()<<"\n";
        cout<<ar.back()<<"\n";
    cout<<ar.empty()<<"\n";
    if(ar2.empty())
        cout<<"Arrar is Empty\n";
    else 
        cout<<"Array is not Empty\n";
    //cin>>ar[0];
    //cout<<ar[0];
    return 0;
}