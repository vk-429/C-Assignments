#include<iostream>
using namespace std;


template<typename x>
x largest(x a,x b,x c)
{
    if(a>b)
    {
        if(a>c)return a;
        else return c;
    }
    else
    {
        if(b>c)return b;
        else return c;
    }
}
int main()
{
    cout<<largest(1,2,3)<<"\n";
    cout<<largest(1.2,2.4,3.1)<<"\n";
    cout<<largest(1.4f,2.4f,3.5f)<<"\n";
    cout<<largest('a','b','c')<<"\n";

    return 0;
}