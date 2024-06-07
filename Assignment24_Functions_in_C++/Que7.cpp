#include<iostream>
using namespace std;
int Sum(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum is "<<Sum(a,b);
    cout<<endl<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"Sum is "<<Sum(a,b,c);
    return 0;
}
int Sum(int x,int y,int z)
{
    return x+y+z;
}