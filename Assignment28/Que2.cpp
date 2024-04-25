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
        void setData(int real,int img)
        {
            this->real=real;
            this->img=img;
        }
        //friend void setData(Complex &,int,int);
        void showData()
        {
            cout<<"Real = "<<real<<" Img = "<<img<<endl;
        }
};
/*void setData(Complex &C,int real,int img)
{
    C.real=real;
    C.img=img;
}*/
int main()
{
    Complex C1,C2;
    //setData(C1,2,3);
    //setData(C2,4,5);
    C1.setData(2,3);
    C2.setData(4,5);
    C1.showData();
    C2.showData();
    return 0;
}