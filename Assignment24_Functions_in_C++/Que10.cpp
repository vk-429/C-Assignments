#include<iostream>
using namespace std;
int Add(int,int);
float Add(float,float);
float Add(int,float);
int main()
{
    int a,b,i,k;
    char c,d,l,m;
    float e,f,j,n;
    cout<<"Enter two int numbers : ";
    cin>>a>>b;
    cout<<"Sum is "<<Add(a,b);
    cout<<endl<<"Enter two char numbers : ";
    cin>>c>>d;
    cout<<"Sum is "<<Add(c,d);
    cout<<endl<<"Enter two float numbers : ";
    cin>>e>>f;
    cout<<"Sum is "<<Add(e,f);
    cout<<endl<<"Enter an int and a float number : ";
    cin>>i>>j;
    cout<<"Sum is "<<Add(i,j);
    cout<<endl<<"Enter a char and an int number : ";
    cin>>k>>l;
    cout<<"Sum is "<<Add(k,l);
    cout<<endl<<"Enter a char and a float number : ";
    cin>>m>>n;
    cout<<"Sum is "<<Add(m,n);
    return 0;
}
int Add(int x,int y)
{
    return x+y;
}
float Add(float p,float q)
{
    return p+q;
}
float Add(int r,float s)
{
    return r+s;
}