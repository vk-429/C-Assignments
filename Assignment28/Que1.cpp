#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        friend istream& operator>>(istream &,Complex &);
        friend ostream& operator<<(ostream &,Complex &);
};
istream& operator>>(istream &mycin,Complex &C)
{
    cout<<"Enter real part : ";
    mycin>>C.real;
    cout<<"Enter imaginary part : ";
    mycin>>C.img;
    cout<<endl;
    return mycin;
}
ostream& operator<<(ostream &mycout,Complex &C)
{
    cout<<"Real = "<<C.real<<" Img = "<<C.img<<endl;
    return mycout;
}
int main()
{
    Complex C1,C2;
    cout<<"Enter 1st Complex Number \n";
    cin>>C1;
    cout<<"1st complex Number \n";
    cout<<C1;
    cout<<"\n";
    cout<<"Enter 2nd Complex Number \n";
    cin>>C2;
    cout<<"2nd complex Number \n";
    cout<<C2;
    Complex C3,C4;
    cout<<"\n";
    cout<<"Takin two objects input using one cin :-\n";
    cin>>C3>>C4;
    cout<<"Printing two object using one cout :-\n";
    cout<<C3<<C4;
    return 0;
}