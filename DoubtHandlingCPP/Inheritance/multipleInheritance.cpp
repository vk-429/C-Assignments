#include<iostream>
using namespace std;
class A 
{
    public:
        void printX()
        {
            cout<<"PrintX of A\n";
        }
};
class B
{
    public:
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
