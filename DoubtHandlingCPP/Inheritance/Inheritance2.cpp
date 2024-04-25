#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Base constructor called\n";
        }
};
class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"Derived constructor called\n";
        }
};
int main()
{
    Base *b;
    Derived *d;

    Base obj1;
    Derived obj2;
    
    b=&obj1;//Base pointer can point to base object
    d=&obj2;//Valid derived pointer can point to derived object
    b=&obj2;//valid base pointer can point to derived object
    //d=&obj1;//INVALID DERIVED POINTER CAN'T POINT TO BASE POINTER
    return 0;
}