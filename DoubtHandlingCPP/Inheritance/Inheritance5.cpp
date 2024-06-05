#include<iostream>
using namespace std;
class A
{
    public:
        void fun1()
        {
            cout<<"fun1 of A called\n";
        }
    protected:
        void fun2()
        {
            cout<<"fun2 of A called\n";
        }
    private:
        void fun3()
        {
            cout<<"fun3 of A called\n";
        }
};
class B:public A
{
    //any type of inheritance is done protected and public of A are Accesible for B anywhere in class B
    private:
        void check()
        {
            // Private Inheritence:-
            fun1();// Accessible anywhere in B, NA outside
            fun2();// Accessible anywhere in B, NA outside
        }

    protected:
        void check1()
        {
            // Protected Inheritence:-
            fun1();// Accessible anywhere in B, NA outside
            fun2();// Accessible anywhere in B, NA outside
        }
    public:
        void checkProtected()
        {
            // Public Inheritence:-
            fun1();//Public of A Accessible anywhre in B and outside as well
            fun2();//Protected of A Accessible anywhre in B and outside as well
            //fun3();//NA
            //only public and protected are accessible in derived class

            // Object of B can access protected and private members of A indirectly
            // With the help of public members of B, no matter what kind of inheritence
            // I have done Public of B is always accessible for Object of B and, Public and
            // Protected of B are always accessible for A, hence an object of B can access 
            // Protected and Public members of A with the help of public member of B, anytime   
        }
};
int main()
{
    A a;
    a.fun1();//public : object of A can access public members outside class
    //a.fun2();//protected : not accessible outside class
    //a.fun3();//private : not accessible outside class

    B b;
    b.fun1();//public inheritance : public of A is public for object of B outside class : Accessible
    //b.fun2();//public inheritance : protected of A is protected for object of B outside class : Not Accessible
    //b.fun3();//public inheritence : private of A NA 'for B and obviously outside B'
    b.checkProtected();//Public of B : Accessible outside class by object of B
    //Also indirectly accessing protected member of A
    //b.check1();//protected : NA
    //b.check();//private : NA
    return 0;
}