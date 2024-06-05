#include<iostream>
using namespace std;

template<typename x>
x add(x a, x b)
{
    return a+b;
}
int main()
{
    cout<<add(2.5,3.1)<<"\n";
    cout<<add(2,4)<<"\n";
    cout<<add('A','T')<<'\n';
    cout<<add(2.1f,2.5f)<<'\n';
    return 0;
}