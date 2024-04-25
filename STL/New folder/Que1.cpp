#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10> arr={2,3,6,4,8,10,15,20};
    int index,value;
    cout<<"Enter the index and value : ";
    cin>>index>>value;
    cout<<arr.at(index)<<"\n";
    array<int,5>::iterator it=&arr.at(index);
    *it=value;
    cout<<arr.at(index)<<"\n";
    //array<int,5>::iterator it=&arr[5];
    return 0;
}