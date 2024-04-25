
#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5>arr={1,2,3,4,5};
    int index;
    cout<<"Enter index: ";
    cin>>index;
    if(index<5)
    cout<<arr.at(index)<<"\n";
    else
    cout<<"Index out of bound\n";
    return 0;
}