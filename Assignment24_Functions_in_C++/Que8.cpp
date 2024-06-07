#include<iostream>
using namespace std;
double Area(double);
double Area(double,double);
double Area(int,int);
int main()
{
    double r;
    double a,b;
    int B, H;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"Area of the circle is "<<Area(r);
    cout<<endl<<"Enter the sides of the rectangle : ";
    cin>>a>>b;
    cout<<"Area of the circle is "<<Area(a,b);
    cout<<endl<<"Enter the base and hight of the triangle : ";
    cin>>B>>H;
    cout<<"Area of the triangle is "<<Area(B,H);
}
double Area(double rad)
{
    return 3.14*rad*rad;
}
double Area(double x,double y)
{
    return x*y;
}
double Area(int b,int h)
{
    return 0.5*b*h;
}