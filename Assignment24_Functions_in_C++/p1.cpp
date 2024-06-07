#include<iostream>
using namespace std;

long long int Fact(int num)
{
    long long int fact=1,i;
    for(i=2;i<=num;i++)
        fact*=i;
    return fact;
}

int main()
{
    int n;
    cin>>n;
    cout<<Fact(n)<<"\n";
    return 0;
}