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
            cout<<endl<<"Real = "<<real<<" Img = "<<img<<endl;
        }
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.img=img+C.img;
            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.img=img-C.img;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.real=real*C.real;
            temp.img=img*C.img;
            return temp;
        }
        bool operator==(Complex C)
        {
            return (real==C.real&&img==C.img);
        }
};
int main()
{
    Complex C1,C2,C3,C4,C5;
    C1.setData(3,4);
    C2.setData(5,6);
    C3=C1+C2;
    C4=C2-C1;
    C5=C3*C4;
    int r,r1;
    Complex C6;
    C6.setData(8,10);
    r=(C3==C4);
    r1=(C3==C6);
    cout<<"1st number : ";
    C1.showData();
    cout<<"2nd number : ";
    C2.showData();
    cout<<"Addition : ";
    C3.showData();
    cout<<"Subtraction : ";
    C4.showData();
    cout<<"Multiplication : ";
    C5.showData();
    cout<<endl<<"Result of 1st comparison : "<<r;
    cout<<endl<<"Result of 2nd comparison : "<<r1;
    return 0;
}