#include<iostream>
using namespace std;
//similar to question 6 and 7
class A
{
    public:
        A()
        {
            cout<<"DC of A Called\n";
        }
        A(int x)
        {
            cout<<"PC of A Called\n";
        }
        ~A()
        {
            cout<<"Destructor of A Called\n";
        }
};
class B:public A
{
    public:
        B():A()
        {
            cout<<"DC of B Called\n";
        }
        B(int x):A(2)
        {
            cout<<"PC of B Called\n";
        }
        ~B()
        {
            cout<<"Destructor of B Called\n";
        }
};

int main()
{
    A a;//Default Constructor of A will be called to creat a.
    B b;//DC of B called, which will call DC of A, DC of A executes first and then DC of B
    B b1(5);//PC of B called, which will call DC or PC of A depending upon code
    //DC/PC of A will execute first and then PC of B
    return 0;
}