#include<iostream>
using namespace std;

class shape
{
    private:
        double a;
        double b;
    public:
        void get_data(double a,double b)
        {
            this->a=a;
            this->b=b;
        }
        double calcArea()
        {
            return (a*b);
        }
        virtual void display_Area()=0; 
};
class Rectangle:public shape
{
    public:
        void display_Area()
        {
            cout<<"Area of Rectangle is "<<calcArea()<<"\n";
        }
};
class Triangle:public shape
{
    public:
        void display_Area()
        {
            cout<<"Area of Triangle is "<<calcArea()/2<<"\n";
        }
};
int main()
{
    Rectangle R1;
    Triangle T1;
    shape *s;
    
    return 0;
}