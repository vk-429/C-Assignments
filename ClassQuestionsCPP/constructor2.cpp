#include<iostream>
using namespace std;
//static global variable is a myth
int A;//global variabe
class Complex
{
    private:
        int a,b;//instance member variable
    public:
        Complex(){a=0;b=0;}
        Complex(int x){a=x;b=0;}
        Complex (int x,int y){a=x;b=y;}
        Complex(Complex &C)
        {
            a=C.a;
            b=C.b;
        }
        void setData(int x,int y)//instance member function
        {
            a=x;//local variable
            b=y;
        }
        void showData()
        {
            cout<<"real = "<<a<<" img = "<<b<<endl;
        }
        Complex add(Complex C)//c ke liye copy contructor call hua hai
        {
            Complex temp(0,0);
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
};
int main()
{
    Complex c1(3,4),c2(5,6),c3(2),c4;
    Complex c5=c1;
    c4=c2;
    //c1.setData(3,4);
    //c2.setData(5,6);
    //c3=c1+c2;
    //c3=c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    return 0;
} 

