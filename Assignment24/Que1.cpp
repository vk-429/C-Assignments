#include<iostream>
using namespace std;
void Prime(int);
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    Prime(n);
    return 0;
}
void Prime(int m)
{
    int i,flag=0;
    for(i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1 || m==1)
        cout<<"Number is not prime";
    else
        cout<<"Number is prime";
}