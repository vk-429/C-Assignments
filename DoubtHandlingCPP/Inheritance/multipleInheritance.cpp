#include<iostream>
using namespace std;
class A 
{
    public:
        A()
        {
            cout<<"DC of A called\n";
        }
        void printX()
        {
            cout<<"PrintX of A\n";
        }
};
class B
{
    public:
        B()
        {
            cout<<"DC of B called\n";
        }
        void printY()
        {
            cout<<"PrintY of B\n";
        }
        void printX()
        {
            cout<<"PrintX of B\n";
        }
};
class C : public A,public B
{
    public:
        C()
        {
            cout<<"DC of C called\n";
        }
};
int main()
{
    C c;
    c.A::printX();//agr dono class me same name ka fn hai
    //to aise likhna hoga
    c.B::printX();
    c.printY();
    return 0;
}
