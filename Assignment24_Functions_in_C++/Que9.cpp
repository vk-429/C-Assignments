#include<iostream>
using namespace std;
float Max(float,float);
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two intgers : ";
    cin>>a>>b;
    cout<<"Maximum of "<<a<<" and "<<b<<" is "<<Max(a,b); // Type promotion int to float
    cout<<endl<<"Enter two real numbers : ";
    cin>>c>>d;
    cout<<endl<<"Maximum of "<<c<<" and "<<d<<" is "<<Max(c,d);
    return 0;
}
float Max(float p,float q)
{
    if(p>q)
        return p;
    else
        return q;
}
