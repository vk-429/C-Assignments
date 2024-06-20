#include<iostream>
using namespace std;

int main()
{
    int *p = new int(25); // We can also initialize value of the
    // variable at the time of declaration with the help of constructor
    // also in the case of user defined data type 
    float *f = new float(75.5);
    cout<<*p<<" "<<*f<<"\n";
    int *array{new int[5]{1,2,3,4,5}}; // Initialize while declaring
    int *a{new int[10]{}}; // initialization with zero
    for(int i=0;i<5;i++)cout<<array[i]<<" ";
    cout<<"\n";
    for(int j=0;j<10;j++)cout<<a[j]<<" ";
    cout<<"\n";
    return 0;
}