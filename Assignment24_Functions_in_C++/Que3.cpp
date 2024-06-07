#include<iostream>
using namespace std;
int Power(int,int);
int main()
{
    int x,y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    cout<<"x raised to the power y is "<<Power(x,y);
}
int Power(int x,int y)
{
    int i,power=1;
    for(i=0;i<y;i++)
        power*=x;
    return power;
}