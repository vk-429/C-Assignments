#include<iostream>
using namespace std;
//static global variable is a myth
int A;//global variabe
class Complex
{
    private:
        int a,b;//instance member variable
    public:
        void setData(int x,int y)//instance member function
        {
            a=x;//local variable
            b=y;
        }
        void showData()
        {
            cout<<"real = "<<a<<" img = "<<b<<endl;
        }
        Complex /*addition,sum*/ operator+(Complex C)//operator
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator-()
        {
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;
    c4=-c3;
    //c3=c1.operator+(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    return 0;
} 
