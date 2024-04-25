#include<iostream>
using namespace std;
class Complex
{
    private:
        float real,img;
    public:
        void input()
        {
            cout<<"Enter real part : ";
            cin>>real;
            cout<<"Enter imaginary part : ";
            cin>>img;
        }
        void display()
        {
            cout<<"Complex number is given as "<<real<<" + "<<img<<"i"<<endl;
        }
};
int main()
{
    Complex x1,x2;
    x1.input();
    x2.input();
    x1.display();
    x2.display();
    return 0;
}