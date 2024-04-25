#include<iostream>
using namespace std;
class A
{
    private:
        void privateFunA()
        {
            cout<<"\nThis is private of A";
        }
    protected:
        void protectedFunA()
        {
            cout<<"\nThis is protected of A";
        }
    public:
        A()
        {
            cout<<"A\n";
        }
        void publicFunA()
        {
            cout<<"\nThis is public of A";
        }
        A(int a)
        {
            cout<<"\nPPC Called";
        }
        ~A()
        {
            cout<<"\nP Destructor Called";
        }
};
class AV2:public A
{
    private:
        //A a;
        void privateFun()
        {
            cout<<"\nThis is private of AV2";
        }
    protected:
        void protectedFun()
        {
            cout<<"\nThis is protected of AV2";
        }
    public:
        AV2():A()
        {
            cout<<"AV2\n";
        }
        void publicFun()
        {
            cout<<"\nThis is public of AV2";
            //privateFunA();
            protectedFunA();
            publicFunA();
        }
        AV2(int a):A(2)
        {
            cout<<"\nCPC Called";
        }
        ~AV2()
        {
            cout<<"\nC Destructor Called";
        }
};
int main()
{
    AV2 A;
    //A A1;
    //A1.privateFun();
    //A1.protectedFun();
    //A1.publicFunA();
    AV2 a(2);
    a.publicFun();
    a.publicFunA();
    return 0;
}