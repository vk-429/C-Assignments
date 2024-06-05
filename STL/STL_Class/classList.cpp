#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list<int> l1;
    for(int i=0;i<5;i++)
    {
        l1.push_back(i*100);
    }
    l1.push_front(10);
    l1.push_back(50);

    l1.reverse();
    l1.sort();
    l1.pop_front();
    l1.pop_back();
    l1.remove(200);
    cout<<"Front element = "<<l1.front()<<"\n";
    list<int>::iterator x;
    for(x=l1.begin();x!=l1.end();x++)
        cout<<*x<<" ";
    cout<<"\n";
    return 0;
}