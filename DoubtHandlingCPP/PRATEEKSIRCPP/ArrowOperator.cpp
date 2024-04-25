#include<iostream>
using namespace std;
class Shape
{
    private:
        float area;
    public:
        void setArea(float a)
        {
            area = a;
        }
        void display()
        {
            cout<<"Area = "<<area<<endl;
        }

};
class Circle
{
    Shape s;//common properties
    float radius;//unique properties
    public:
        void setRadius(float r)
        {
            radius=r;
        }
        void findArea()
        {
            s.setArea(3.14*radius*radius);
        }
        Shape *operator->()
        {
            return &s;
        }
};
class Rectangle
{
    Shape S;
    int L,B;
    public:
        void setLB(int l,int b)
        {
            L=l;
            B=b;
        }
        void findArea()
        {
            S.setArea(L*B);
        }
        Shape* operator->()
        {
            return &S;
        }
};
int main()
{
    Circle C;
    C.setRadius(5);
    C.findArea();
    C->display();
    Rectangle R;
    R.setLB(4,5);
    R.findArea();
    R->display();
    return 0;
}