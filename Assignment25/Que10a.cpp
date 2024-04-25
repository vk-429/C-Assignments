#include<iostream>
using namespace std;
class Area
{
    private:
        int a,b;
        float rad;
        int side;
        float H,B;
    public:
        void AreaSquare(int side)
        {
            cout<<"Area of square is "<<side*side<<endl;
        }
        void AreaRectangle(int x,int y)
        {
            cout<<"Area of rectangle is "<<x*y<<endl;
        }
        void AreaTriangle(float hight,float base)
        {
            cout<<"Area of triangle is "<<0.50*hight*base<<endl;
        }
        void AreaCircle(float r)
        {
            cout<<"Area of the cicle is "<<3.14*r*r<<endl;
        }
};
int main()
{
    Area A1,A2;
    A1.AreaSquare(4);
    A1.AreaRectangle(5,6);
    A2.AreaTriangle(5.6f,7.9f);
    A2.AreaCircle(2.3f);
    return 0;
}