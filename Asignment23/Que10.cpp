#include<iostream>
using namespace std;

int main()
{
    int i,a[10],sum=0;
    cout<<"Enter 10 number : ";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
        sum+=a[i];
    cout<<"Sum is "<<sum;
    return 0;
}