#include<iostream>
using namespace std;
class shape
{
    public :
        virtual void area() = 0;
};
class Rectangle : public shape
{
    public:
        void area()
        {
            cout<<"Rectangle area called\n";
        }
};
class Triangle:public shape
{
    public:
        void area()
        {
            cout<<"Trianlge area called\n";
        }
};
int main()
{
    Triangle t;
    Rectangle r;
    r.area();
    t.area();
    //shape s;//you can't creat an object of an obstract class
    return 0;
}