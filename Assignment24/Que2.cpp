#include<iostream>
using namespace std;
int HighestDigit(int);
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Maximum digit is "<<HighestDigit(n);
    return 0;
}
int HighestDigit(int n)
{
    int i,r,max=0;
    while(n)
    {
        r=n%10;
        if(r>max)
            max=r;
        n/=10;
    }
    return max;
}