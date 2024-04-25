#include<iostream>
using namespace std;
#include<array>

int main()
{
    array<int,10> arr={1,4,10,3,7,21,34};
    size_t arraySize = arr.size();
    cout<<"Total no. of Elements = "<<arraySize<<"\n";
    return 0;

}