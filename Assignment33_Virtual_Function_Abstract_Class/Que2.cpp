#include<iostream>
using namespace std;

class shape
{
    private:
        double a;
        double b;
        double area;
    public:
        void set_data(double a,double b=1)
        {
            this->a=a;
            this->b=b;
        }
        virtual void display_Area()
        {
            if(b==1) area=a*a;
            else area=a*b;
        } 
        double get_area()
        {
            return area;
        }
};
class Rectangle:public shape
{
    public:
        void display_Area()
        {
            shape::display_Area();
            cout<<"Area of Rectangle is "<<get_area()<<"\n\n";
        }
};
class Triangle:public shape
{
    public:
        void display_Area()
        {
            shape::display_Area();
            cout<<"Area of Triangle is "<<get_area()/2<<"\n\n";
        }
};
class Circle:public shape
{
    public:
        void display_Area()
        {
            shape::display_Area();
            cout<<"Area of Cicle is "<<3.14*get_area()<<"\n\n";
        }

};
int main()
{
    Rectangle R1;
    Triangle T1;
    Circle C1;
    shape s1;
    shape *s;
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
            s=&T1;
            cin>>a>>b;
            s->set_data(a,b);
        }
        else if(choice==2)
        {
            cout<<"Enter height and width of the rectangle : ";
            s=&R1;
            cin>>a>>b;
            s->set_data(a,b);
        }
        else if(choice==3)
        {
            cout<<"Enter radius of the circle : ";
            s=&C1;
            cin>>a;
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