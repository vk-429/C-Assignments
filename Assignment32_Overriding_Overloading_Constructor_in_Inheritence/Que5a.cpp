#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        A()
        {
            cout<<"Default Constructor of A\n";
        }
        A(int a):a(a)
        {
            cout<<"Parameterized Constructor of A\n";
        }
        A(const A& other):a(other.a)
        {
            cout<<"Copy Constructor of A\n";
        }
        void display() const
        {
            cout<<"a = "<<a<<" ";
        }
};
class B:public A
{
    private:
        int b;
    public:
        B():A()
        {
            cout<<"Default Constructor of B\n";
        }
        B(int a,int b):A(a),b(b)
        {
            cout<<"Parameterized Constructor of B\n";
        }
        B(const B& other):b(other.b),A(other)
        {
            cout<<"Copy Constructor of B\n";
        }
        void display() const
        {
            A::display();
            cout<<"b = "<<b<<"\n";
        }
};

int main()
{
    cout<<"Here we are using the Two classes A and B\n";
    cout<<"to elaborate the use of constructors in Single Inheritance\n";
    cout<<"A is the base class, class B has inheritated class A\n";
    cout<<"Creating an object of class B the order of Default Constructors invoked :-\n";
    B b1;
    cout<<"Order of Parameterized Constructor invoked :-\n";
    B b2(3,4);
    cout<<"Data of Object b2:-\n";
    b2.display();
    cout<<"After b3=b2, Order of Copy Constructor invoked :-\n";
    B b3=b2;
    cout<<"Data of Object b3:-\n";
    b3.display();
    return 0;
}