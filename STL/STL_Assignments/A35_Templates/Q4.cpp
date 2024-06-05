#include<iostream>
using namespace std;

template<typename x>
void myswap(x& a, x& b)
{
    x temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=5,b=7;
    cout<<a<<" "<<b<<'\n';
    myswap(a,b);
    cout<<a<<" "<<b<<'\n';
    char c='a',d='b';
    cout<<c<<" "<<d<<'\n';
    myswap(c,d);
    cout<<c<<" "<<d<<'\n';
    return 0;
}
