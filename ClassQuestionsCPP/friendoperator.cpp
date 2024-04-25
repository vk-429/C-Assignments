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
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex);
        Complex operator+(int k)
        {
           Complex temp;
           temp.a=a+k;
           temp.b=b+k;
           return temp;
        }
        friend Complex operator+(int,Complex);
};
Complex operator+(int k,Complex X)
{
    Complex temp;
    temp.a=k+X.a;
    temp.b=k+X.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
Complex /*addition,sum*/ operator+(Complex X,Complex Y)//operator
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;//c3=operator+(c1,c2);
    //c3=c1.operator+(c2);
    c4=-c3;//c4=operator-(c3);
    c1.showData();
    c2.showData();
    c3.showData();
    c3=c1+5;//member operator
    c3=5+c1;//friend operator
    return 0;
} 
