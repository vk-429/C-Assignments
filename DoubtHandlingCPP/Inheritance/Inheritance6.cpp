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
class B:protected A
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
    //Also indirectly accessing protected and public members of A
    //b.check1();//protected : NA
    //b.check();//private : NA
    return 0;
}