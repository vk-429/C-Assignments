#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }
        void showData()
        {
            cout<<endl<<"Real = "<<real<<" Imaginary = "<<img<<endl;
        }
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex C1,Complex C2)
{
    Complex temp;
    temp.real=C1.real+C2.real;
    temp.img=C1.img+C2.img;
    return temp;
}
int main()
{
    Complex C3,C4,C5;
    C3.setData(4,5);
    C4.setData(2,6);
    C5=C3+C4;
    cout<<"1st number : ";
    C3.showData();
    cout<<"2nd number : ";
    C4.showData();
    cout<<"Addition : ";
    C5.showData();
    return 0;
}