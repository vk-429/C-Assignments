#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void printBase()
        {
            cout<<"Base function called\n";
        }
};
class Derived:public Base
{
    public:
        void printBase()
        {
            cout<<"Modified Base function called\n";
        }
        void printDerived()
        {
            cout<<"Derived function called\n";
        }
        virtual void printBase2()
        {
            cout<<"DERIVED ONLY function called\n";
        }
};
int main()
{
    Base *b;
    Derived *d;

    Base obj1;
    Derived obj2;
    
    b=&obj1;//Base pointer can point to base object
    b->printBase();
    //b->printDerived();//invalid because we don't have printDerived inside Base class
    d=&obj2;//Valid derived pointer can point to derived object
    d->printBase();
    obj2.printBase();
    d->printDerived();
    b=&obj2;//valid base pointer can point to derived object
    b->printBase();
    obj1.printBase();
    //b->printBase2();
    //b->printDerived();//Error because base ptr can't access derived function
    //d=&obj1;//INVALID DERIVED POINTER CAN'T POINT TO BASE POINTER
    return 0;
}