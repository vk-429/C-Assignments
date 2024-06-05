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
            fun1();//Here Accessible NA outside
            fun2();//Here Accessible NA outside
        }

    protected:
        void check1()
        {
            fun1();//Here Accessible NA outside
            fun2();//Here Accessible NA outside
        }
    public:
        void checkProtected()
        {
            fun1();//Public of A Accessible
            fun2();//Protected of A Accessible
            //fun3();//NA
            //only public and protected are accessible in derived class
        }
};
class C:public B
{
    public:
        void checkProtected1()
        {
            check1();
            checkProtected();
            fun1();//NA
            fun2();//NA
            //fun3();NA
        }
};
int main()
{
    A a;
    a.fun1();//public : object of A can access public members outside class
    //a.fun2();//protected : not accessible outside class
    //a.fun3();//private : not accessible outside class

    B b;
    //b.fun1();//protected inheritance : public of A is protected for object of B outside class : NA
    //b.fun2();//protected inheritance : protected of A is protected for object of B outside class : Not Accessible
    //b.fun3();//protected inheritence : private of A NA 'for B and obviously outside B'
    b.checkProtected();//Public of B : Accessible outside class by object of B
    //Also indirectly accessing protected member of A
    //b.check1();//protected : NA
    //b.check();//private : NA

    C c;
    c.checkProtected();
    //c.fun1();//public inheritance from B which has done protected inheritance
    //from A ,public & protected of A comes in protected of B : now public of B
    //comes into public of C and protected of B comes into protected of C , means 
    //protected and public of A comes into protected of C
    //c.fun2();NA
    //c.fun3();NA
    c.checkProtected1();
    return 0;
}