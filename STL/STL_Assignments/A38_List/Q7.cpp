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
    list<int>::iterator it;
    it=mylist.begin();
    while(it!=mylist.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
    mylist.push_front(6);
    mylist.push_back(8);
    for(int x: mylist)cout<<x<<" ";
    cout<<"\n";
    return 0;
}