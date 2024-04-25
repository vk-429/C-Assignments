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
        int getX()
        {
            return x;
        }
};
class Ilist
{
    private:
        int x;
        int y;
        int &z;//=x;
        ABC a1;
    public:
        Ilist(int x,int y)/*:x(a),*/:x(x),y(y),z(x),a1(5)
        {
        }
        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<" a1 = "<<a1.getX()<<endl;
        }
};
int main()
{
    Ilist I1(3,4),I2(3,10);
    I1.display();
    I2.display();
    return 0;
}