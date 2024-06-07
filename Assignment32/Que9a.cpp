#include<iostream>
using namespace std;

class shape
{
    private:
        float area;
    public:
        virtual void Area() = 0;
};
class Rectangle:public shape
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){}
        Rectangle(int l,int b)
        {
            length = l;
            breadth = b;
        }
        void Area()
        {
            cout<<"Area of Rectangle is "<<(length*breadth)<<"\n\n";
        }
};
class Triangle:public shape
{
    private:
        int base;
        int hight;
    public:
        Triangle(){}
        Triangle(int b,int h)
        {
            base=b;
            hight=h;
        }
        void Area()
        {
            cout<<"Area of Triangle is "<<(base*hight/2)<<"\n\n";
        }
};
class Circle:public shape
{
    private:
        float radius;
    public:
        Circle(){}
        Circle(float r)
        {
            radius=r;
        }
        void Area()
        {
            cout<<"Area of Circle is "<<(3.1416*radius*radius)<<"\n\n";
        }
};
int main()
{
    int choice;
    shape *s;
    do
    {
        cout<<"1.Triangle\n";
        cout<<"2.Rectangle\n";
        cout<<"3.Circle\n";
        cout<<"4.Exit\n\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                float H,B;
                cout<<"Enter Hight and Base of the Triangle : ";
                cin>>H>>B;
                Triangle T1(B,H);
                s=&T1;
            }
                break;
            case 2:
            {
                int l,b;
                cout<<"Enter Lenght and Breadth of Rectangle : ";
                cin>>l>>b;
                Rectangle R1(l,b);
                s=&R1;
            }
                break;
            case 3:
            {
                float r;
                cout<<"Enter Radius of the Circle : ";
                cin>>r;
                Circle C1(r);
                s=&C1;
            }
                break;
            case 4:
                cout<<"Exiting Program\n";
                break;
            default:
                cout<<"Invalid choice! Please try again\n\n";
        }
        if(choice>0 && choice<4)
            s->Area();
    } while (choice!=4);
    return 0;
}