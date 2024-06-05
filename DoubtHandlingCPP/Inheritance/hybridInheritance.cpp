#include<iostream>
using namespace std;
class shape
{
    public :
        virtual void area() = 0;
};
class Rectangle : virtual public shape
{
    public:
        void area()
        {
            cout<<"Rectangle area called\n";
        }
};
class Triangle: virtual public shape
{
    public:
        void area()
        {
            cout<<"Trianlge area called\n";
        }
};
class Object:public Rectangle,public Triangle
{
    public:
    void area()
    {
        cout<<"Object Area\n";
        Rectangle::area();
        Triangle::area();
    }
};
int main()
{
    Triangle t;
    Rectangle r;
    r.area();
    t.area();

    Object o;
    o.area();
    //shape s;//you can't creat an object of an obstract class

    shape *s;
    s=&o;// To access anything of supream base class with the object or
    // pointer of supream child class we must put virtual keyword before 
    // writing access specifier at the time of inheriting 
    s->area();
    return 0;
}