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
            cout<<"b = "<<b<<" ";
        }
};
class C:public B
{
    private:
        int c;
    public:
        C():B()
        {
            cout<<"Default Constructor of C\n";
        }
        C(int a,int b,int c):B(a,b),c(c)
        {
            cout<<"Parameterized Constructor of C\n";
        }
        C(const C& other):c(other.c),B(other)
        {
            cout<<"Copy Constructor of C\n";
        }
        void display() const
        {
            B::display();
            cout<<"c = "<<c<<"\n";
        }
};

int main()
{
    cout<<"Here we are using the Three classes A, B and C\n";
    cout<<"to elaborate the use of constructors in Multilevel Inheritance\n";
    cout<<"A is the base class, class B has inheritated class A and class C has inheritated class B\n";
    cout<<"Creating an object of class C the order of Default Constructors invoked :-\n";
    C c1;
    cout<<"Order of Parameterized Constructor invoked :-\n";
    C c2(2,3,4);
    cout<<"Data of Object c2:-\n";
    c2.display();
    cout<<"After c3=c2, Order of Copy Constructor invoked :-\n";
    C c3=c2;
    cout<<"Data of Object c3:-\n";
    c3.display();
    return 0;
}