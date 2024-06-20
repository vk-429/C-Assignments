#include<iostream>
using namespace std;

class shape
{
    protected:
        double a;
        double b;
    public:
        void set_data(double a,double b=0)
        {
            this->a=a;
            this->b=b;
        }
        virtual void display_Area()=0;
};
class Rectangle:public shape
{
    public:
        void display_Area()
        {
            double area=a*b;
            cout<<"Area of Rectangle is "<<area<<"\n\n";
        }
};
class Triangle:public shape
{
    public:
        void display_Area()
        {
            double area=(0.5*a*b);
            cout<<"Area of Triangle is "<<area<<"\n\n";
        }
};
class Circle:public shape
{
    public:
        void display_Area()
        {
            double area=(3.14*a*a);
            cout<<"Area of Circle is "<<area<<"\n\n";
        }
};
int main()
{
    shape *s;
    Triangle T1;
    Rectangle R1;
    Circle C1;
    double a,b;
    int choice;
    while(1)
    {
        cout<<"1. Calculate Area of Triangle\n";
        cout<<"2. Calculate Area of Rectangle\n";
        cout<<"3. Calculate Area of Circle\n";
        cout<<"4. Exit\n\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter base and height of the triangle : ";
            cin>>a>>b;
            s = &T1;
            s->set_data(a,b);
        }
        else if(choice==2)
        {
            cout<<"Enter height and width of the rectangle : ";
            cin>>a>>b;
            s = &R1;
            s->set_data(a,b);
        }
        else if(choice==3)
        {
            cout<<"Enter radius of the circle : ";
            cin>>a;
            s = &C1;
            s->set_data(a);
        }
        else if(choice==4)
        {
            exit(0);
        }
        else
        {
            cout<<"Invalid Choice !\n\n";
            continue;
        }
        s->display_Area();
    }
    return 0;
}