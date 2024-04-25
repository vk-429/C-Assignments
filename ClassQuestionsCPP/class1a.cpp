#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        void set(int r,int i)
        {
            real=r;
            img=i;
        }
        void print(Complex c)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
            cout<<c.real<<" + "<<c.img<<"i"<<endl;
        }
        void add(Complex c)
        {
            cout<<real+c.real<<" + "<<img+c.img<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    c1.set(3,2);
    c2.set(5,3);
    c1.print(c2);
    c1.add(c2);
    return 0;       
}