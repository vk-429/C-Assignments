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
    // bcz it will ask for some additional properties of derived class
    // which obj1 don't have, hence it will be an error
    return 0;
}