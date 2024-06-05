#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main()
{
    forward_list<int> l1;
    forward_list<int> l2;
    forward_list<int> l3;
    // Method 1 to assign
    l1.assign({1,2,3,4,5});
    l2.assign(8,10);
    forward_list<int>::iterator x;
    for(x=l1.begin();x!=l1.end();++x)
        cout<<*x<<" ";
    cout<<"\n";
    l3.assign(l1.begin(),l1.end());
    for(x=l2.begin();x!=l2.end();++x)
        cout<<*x<<" ";
    cout<<"\n";
    for(x=l3.begin();x!=l3.end();++x)
        cout<<*x<<" ";
    cout<<"\n";
    x=l3.begin();
    for(int i=1;i<5;i++)
        x++;
    l3.insert_after(x,{7,8,9});
    for(x=l3.begin();x!=l3.end();++x)
        cout<<*x<<" ";
    cout<<"\n";
    return 0;
}