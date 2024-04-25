#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"A() Called\n";
        }
};
class B:virtual public A
{
    public:
        B():A()
        {
            cout<<"B() Called\n";
        }
};
class C:virtual public A
{
    public:
        C():A()
        {
            cout<<"C() Called\n";
        }
};
class D: public B,public C
{
    public:
        D():B(),C()
        {
            cout<<"D() Called\n";
        }
};

int main()
{
    D d;
    return 0;
}