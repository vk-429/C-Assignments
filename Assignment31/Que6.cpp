#include<iostream>
using namespace std;
/*
Here we're using the call by reference method to demonstrate how 
a common friend function can be used to exchange the private values 
of two different classes

Here we have taken the example of class Complex and class Integer
to do so. We have declared the friend function Exchange in both the classes
so that it cna access the private members of both the classes 
syntax can be found in the program. 

Here we have to take care of one thing that Complex class is above the Integer
class but in the declaration of friend function we need to use Integer data type
as well. Hence, we have to declare the Integer class above the Complex class
to use Integer and rest of things can be found out from programm below 
*/
class Integer;
class Complex
{
    private:
        int real;
        int img;
    public:
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }
        void Display()
        {
            cout<<"Real = "<<real<<"\n";
            cout<<"Img = "<<img<<"\n";
        }
    friend void Exchange(Complex&,Integer&);
};
class Integer
{
    private:
        int a;
    public:
        void setA(int n)
        {
            a=n;
        }
        void display()
        {
            cout<<"Integer = "<<a<<"\n";
        }
    friend void Exchange(Complex&,Integer&);
};
void Exchange(Complex& C,Integer& I)
{
    int temp;
    temp=I.a;
    I.a=C.real;
    C.real=temp;
}
int main()
{
    Complex C;
    C.setData(2,3);
    Integer I;
    I.setA(4);
    cout<<"Exchanging value of private member 'real' of Complex class \nwith the private member 'a' of Integer class:-\n";
    cout<<"Values Before Exchange :-\n";
    C.Display();
    I.display();
    Exchange(C,I);
    cout<<"Values After Exchange :-\n";
    C.Display();
    I.display();
    return 0;
}