#include<iostream>
#include<deque>
#include<iterator>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(5);
    d.push_back(6);

    deque<int>::iterator x;
    for(x=d.begin();x!=d.end();x++)
        cout<<*x<<" ";
    cout<<"\n";
    cout<<"Size = "<<d.size()<<"\n";
    cout<<"Max_Size = "<<d.max_size()<<"\n";
    cout<<"Front = "<<d.front()<<"\n";
    d.pop_back();
    cout<<"Size after pop = "<<d.size()<<"\n";
    d.pop_front();
    cout<<"Back = "<<d.back()<<"\n";
    for(x=d.begin();x!=d.end();x++)
        cout<<*x<<" ";
    return 0;
}