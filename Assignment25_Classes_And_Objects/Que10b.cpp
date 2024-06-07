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
class Circle
{
    private:
        int rad;
        float area;
    public:
        void setR(int r)
        {
            rad=r;
        }
        int getR()
        {
            return rad;
        }
        void CalcArea()
        {
            area=3.14f*rad*rad;
        }
        float getArea()
        {
            return area;
        }
};
class Triangle
{
    private:
        float hight,base;
        float area;
    public:
        void setHB(int h,int b)
        {
            hight=h;
            base=b;
        }
        float getH()
        {
            return hight;
        }
        float getB()
        {
            return base;
        }
        void CalcArea()
        {
            area=0.5f*hight*base;
        }
        float getArea()
        {
            return area;
        }
};
class Square
{
    private:
        int side;
        int area;
    public:
        void setSide(int s)
        {
            side=s;
        }
        int getSide()
        {
            return side;
        }
        void CalcArea()
        {
            area=side*side;
        }
        int getArea()
        {
            return area;
        }
};
int main()
{
    Rectangle R1,R2;
    Circle C1,C2;
    Triangle T1,T2;
    Square S1,S2;
    R1.setSides(4,5);
    R2.setSides(10,20);
    R1.CalcArea();
    R2.CalcArea();
    cout<<"Area of rectangle having sides "<<R1.getA()<<" and "<<R1.getB()<<" is "<<R1.getArea()<<endl;
    cout<<"Area of rectangle having sides "<<R2.getA()<<" and "<<R2.getB()<<" is "<<R2.getArea()<<endl;
    C1.setR(5);
    C2.setR(8);
    C1.CalcArea();
    C2.CalcArea();
    cout<<"Area of circle having radius "<<C1.getR()<<" is "<<C1.getArea()<<endl;  
    cout<<"Area of circle having radius "<<C2.getR()<<" is "<<C2.getArea()<<endl;  
    T1.setHB(4.5f,6.2f);
    T2.setHB(3.2f,9.1f);
    T1.CalcArea();
    T2.CalcArea();
    cout<<"Area of triangle having hight "<<T1.getH()<<" and base "<<T1.getB()<<" is "<<T1.getArea()<<endl;
    cout<<"Area of triangle having hight "<<T2.getH()<<" and base "<<T2.getB()<<" is "<<T2.getArea()<<endl;
    S1.setSide(9);
    S2.setSide(5);
    S1.CalcArea();
    S2.CalcArea();
    cout<<"Area of square having side "<<S1.getSide()<<" is "<<S1.getArea()<<endl;
    cout<<"Area of square having side "<<S2.getSide()<<" is "<<S2.getArea()<<endl;
    return 0;

}