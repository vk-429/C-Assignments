#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> mylist;
    cout<<"Enter no. of emelents : ";
    int n;cin>>n;
    int i;
    cout<<"Enter list Elements : ";
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mylist.push_back(x);
    }
    for(int x:mylist)
        cout<<x<<" ";
    cout<<"\n";
    return 0;
}