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
            cout<<"Real = "<<real<<" Img = "<<img<<endl<<endl;
        }
        Complex operator++()//Pre increment
        {
            Complex temp;
            temp.real=++real;
            temp.img=++img;
            return temp;
        }
        Complex operator++(int)//Post increment
        {
            Complex temp;
            temp.real=real++;
            temp.img=img++;
            return temp;
        }
        Complex operator--()
        {
            Complex temp;
            temp.real=--real;
            temp.img=--img;
            return temp;
        }
        Complex operator--(int)
        {
            Complex temp;
            temp.real=real--;
            temp.img=img--;
            return temp;
        }
};
int main()
{
    Complex C1,C2,C3,C4;
    C1.setData(5,6);
    C2.setData(11,15);
    C1.showData();
    cout<<"INCREMENT OPERATOR\n\n";
    cout<<"Pre increment :-\n";
    ++C1;
    C1.showData();
    C2.showData();
    cout<<"Post increment :-\n";
    C2++;
    C2.showData();
    cout<<"Assigning value using preincrement oprerator :-\n";
    C3=++C1;
    C3.showData();
    cout<<"Assigning value using postincrement oprerator :-\n";
    C4=C2++;
    C4.showData();
    cout<<"\n\n\n";
    cout<<"DECREMENT OPERATOR\n\n";
    Complex C5,C6,C7,C8;
    C5.setData(5,6);
    C6.setData(11,15);
    C5.showData();
    cout<<"Pre decrement :-\n";
    --C5;
    C5.showData();
    C6.showData();
    cout<<"Post decrement :-\n";
    C6--;
    C6.showData();
    cout<<"Assigning value using predecrement oprerator :-\n";
    C7=--C5;
    C7.showData();
    cout<<"Assigning value using postdecrement oprerator :-\n";
    C8=C6--;
    C8.showData();
    return 0;
}