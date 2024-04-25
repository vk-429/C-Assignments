#include<iostream>
using namespace std;
int FibCheck(int);
int main()
{
    int n,result;
    cout<<"Enter a number : ";
    cin>>n;
    result=FibCheck(n);
    if(result==1)
        cout<<"Given number is a term of Fibonacci Series";
    if(result==0)
        cout<<"Given number is not a term of Fibonacci Series";
    return 0;
}
int FibCheck(int num)
{
    int fibn,fibnm2=-1,fibnm1=1;
    int i,flag=0;
    for(i=0;;i++)
    {
        fibn=fibnm2+fibnm1;
        fibnm2=fibnm1;
        fibnm1=fibn;
        if(num==fibn)
        {
            flag=1;
            break;
        }
        else if(fibn>num)
            break;
    }
    return flag;
}
