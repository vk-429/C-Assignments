#include<iostream>
using namespace std;

int main()
{
    int *p = new int(10); // single 4 byte memory created
    int *a = new int[10]; // Array of 10 size
    if(!p || !a)
    {
        cout<<"Memory Allocation Failed!\n";
        return 0;
    }
    cout<<*p<<"\n";

    cout<<"Enter 10 Values:\n";
    for(int i=0;i<10;i++)cin>>a[i];
    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<"\n";

    delete p;
    delete []a;
    return 0;
}