#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
    vector<int> myvec={1,2,3,4,5};
    list<int> mylist(myvec.begin(),myvec.end());
    for(int x:mylist)cout<<x<<" ";
    cout<<"\n";
    list<int>::const_iterator it;
    it=mylist.begin();
    while(it!=mylist.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
    return 0;
}