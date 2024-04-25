#include<iostream>
using namespace std;
class ABC
{
    private:
        int x;
    public:
        ABC(int a)
        {
            x=a;
        }
};
class Ilist
{
    private:
        int x;
        const int y;
        int &z;//=x;
        ABC a1;
    public:
        Ilist(int a,int b)/*:x(a),*/:y(b),z(x),a1(5)
        {
            x=a;
            a1=5;
        }
        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }
};
int main()
{
    Ilist I1(3,4),I2(3,10);
    I1.display();
    I2.display();
    return 0;
}