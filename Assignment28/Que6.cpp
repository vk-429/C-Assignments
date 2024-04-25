#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }
        Complex(const Complex &C)
        {
            real=C.real;
            img=C.img;
        }
        Complex operator=(const Complex &C)
        {
            real=C.real;
            img=C.img;
            return *this;
        }
        friend istream& operator>>(istream &,Complex &);
        friend ostream& operator<<(ostream &,Complex &);
};
istream& operator>>(istream &mycin,Complex &C)
{
    cout<<"\nEnter real part : ";
    mycin>>C.real;
    cout<<"Enter imaginary part : ";
    mycin>>C.img;
    return mycin;
}
ostream& operator<<(ostream &mycout,Complex &C)
{
    mycout<<"\nReal = "<<C.real<<" Imginary = "<<C.img<<"\n";
    return mycout;
}
int main()
{
    Complex C1(3,4),C2(5,6);
    cout<<C1;
    cout<<C2;
    Complex C3=C2;
    cout<<C3;
    Complex C4;
    C4=C1;
    cout<<C4;
    Complex C5;
    cin>>C5;
    C5=C5;
    cout<<C5;
    C5=C4=C1;
    cout<<C5<<C4<<C1;
    return 0;
}