#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw '0';
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