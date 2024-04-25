#include<iostream>
using namespace std;
//static global variable is a myth
int A;//global variabe
class Complex
{
    private:
        int a,b;//instance member variable
    public:
        void setData(int a,int b)//instance member function
        {
            this->a=a;//local variable
            this->b=b;
        }
        void showData()
        {
            cout<<"real = "<<a<<" img = "<<b<<endl;
        }
        Complex sumGreater(Complex C)
        {
            if((a+b) > (C.a+C.b))
                return *this;//we can't write c1 here
            else
                return C;
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
void inputData(Complex *p)
{
    int x,y;
    cout<<"Enter real and imaginary part of a complex number : ";
    cin>>x>>y;
    p->setData(x,y);
}
int main()
{
    Complex *p;
    p=new Complex;//Complex abject created dynamically without any name
    p->setData(10,20);
    p->showData();
    delete p;
    return 0;
}