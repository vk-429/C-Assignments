#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'a';
    }
    catch(int x)
    {
        cout<<"Caught "<<x;
    }
    catch(...)
    {
        cout<<"Default exception\n";
    }
    return 0;
}