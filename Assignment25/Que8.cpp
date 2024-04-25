#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int a,b;
        int area;
    public:
        void setSides(int x,int y)
        {
            a=x;
            b=y;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        void CalcArea()
        {
            area=a*b;
        }
        int getArea()
        {
            return area;
        }
};
int main()
{
    Rectangle R1,R2;
    R1.setSides(4,5);
    R2.setSides(7,4);
    R1.CalcArea();
    R2.CalcArea();
    cout<<"Area of rectangle having sides "<<R1.getA()<<" and "<<R1.getB()<<" is "<<R1.getArea()<<endl;
    cout<<"Area of rectangle having sides "<<R2.getA()<<" and "<<R2.getB()<<" is "<<R2.getArea()<<endl;
    return 0;
}