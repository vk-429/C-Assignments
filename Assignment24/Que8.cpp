#include<iostream>
using namespace std;
float Area(int);
int Area(int,int);
float Area(int,float);
int main()
{
    int r;
    int a,b;
    float H;
    int B;
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
float Area(int rad)
{
    return 3.14*rad*rad;
}
int Area(int x,int y)
{
    return x*y;
}
float Area(int b,float h)
{
    return 0.5*b*h;
}