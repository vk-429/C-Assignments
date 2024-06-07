#include<iostream>
using namespace std;
class Area
{
    private:
        int a,b;
        int a1;
        float H,B;
        float a2;
        int r;
        float a3;
        int side;
        int a4;
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
        void RectangleArea()
        {
            a1=a*b;
        } 
        int getRectArea()
        {
            return a1;
        }
        void setHB(int h,int b)
        {
            H=h;
            B=b;
        }
        float getHight()
        {
            return H;
        }
        float getBase()
        {
            return B;
        }
        void TriangleArea()
        {
            a2=0.5f*H*B;
        }
        float getTriArea()
        {
            return a2;
        }
        void setR(int x)
        {
            r=x;
        }
        int getR()
        {
            return r;
        }
        void CircleArea()
        {
            a3=3.14f*r*r;
        }
        float getCircleArea()
        {
            return a3;
        }
        void setSide(int s)
        {
            side=s;
        }
        int getSide()
        {
            return side;
        }
        void SquareArea()
        {
            a4=side*side;
        }
        int getSquareArea()
        {
            return a4;
        }
};
int main()
{
    Area R1,R2;
    Area T1,T2;
    Area C1,C2;
    Area S1,S2;
    R1.setSides(4,5);
    R2.setSides(5,6);
    R1.RectangleArea();
    R2.RectangleArea();
    cout<<"Area of rectangle having sides "<<R1.getA()<<" and "<<R1.getB()<<" is "<<R1.getRectArea()<<endl;
    cout<<"Area of rectangle having sides "<<R2.getA()<<" and "<<R2.getB()<<" is "<<R2.getRectArea()<<endl;
    T1.setHB(3.2f,4.9f);
    T2.setHB(2.1f,7.4f);
    T1.TriangleArea();
    T2.TriangleArea();
    cout<<"Area of triangle having hight "<<T1.getHight()<<" and base "<<T1.getBase()<<" is "<<T1.getTriArea()<<endl;
    cout<<"Area of triangle having hight "<<T2.getHight()<<" and base "<<T2.getBase()<<" is "<<T2.getTriArea()<<endl;
    C1.setR(2);
    C2.setR(7);
    C1.CircleArea();
    C2.CircleArea();
    cout<<"Area of the circle having radius "<<C1.getR()<<" is "<<C1.getCircleArea()<<endl;
    cout<<"Area of the circle having radius "<<C2.getR()<<" is "<<C2.getCircleArea()<<endl;
    S1.setSide(4);
    S2.setSide(7);
    S1.SquareArea();
    S2.SquareArea();
    cout<<"Area of square having side "<<S1.getSide()<<" is "<<S1.getSquareArea()<<endl;
    cout<<"Area of square having side "<<S2.getSide()<<" is "<<S2.getSquareArea()<<endl;
    return 0;
}