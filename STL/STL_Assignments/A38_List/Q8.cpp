#include<iostream>
#include<list>
#include<vector>
using namespace std;

bool isEven(int value) {
    return value % 2 == 0;
}
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
    mylist.push_back(5);
    mylist.push_back(5);
    mylist.remove(5);
    for(int x:mylist)cout<<x<<" ";
    cout<<"\n";
    mylist.remove_if(isEven);
    for(int x:mylist)cout<<x<<" ";
    cout<<"\n";
    return 0;
}