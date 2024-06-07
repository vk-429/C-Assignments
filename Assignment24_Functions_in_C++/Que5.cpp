#include<iostream>
using namespace std;
bool FibCheck(int);
int main()
{
    int n;
    bool result;
    cout<<"Enter a number : ";
    cin>>n;
    result=FibCheck(n);
    if(result==true)
        cout<<"Given number is a term of Fibonacci Series";
    else
        cout<<"Given number is not a term of Fibonacci Series";
    return 0;
}
bool FibCheck(int num)
{
    int fibn,fibnm2=-1,fibnm1=1;
    do
    {
        fibn=fibnm2+fibnm1;
        fibnm2=fibnm1;
        fibnm1=fibn;
    }while(fibn<num);
    return (fibn==num);
}
