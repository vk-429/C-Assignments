#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5>arr={1,2,3,4,5};
    cout<<"First Element : "<<arr[0]<<", Last Element : "<<arr[arr.size()-1]<<"\n";
    return 0;
}