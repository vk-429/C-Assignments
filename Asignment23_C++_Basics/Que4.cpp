#include<iostream>
using namespace std;

int main()
{
    int radius;
    float Area;
    cout<<"Enter radius of the circle : ";
    cin>>radius;
    Area=3.14*radius*radius;
    cout<<"Area of the circle is "<<Area<<" having radius "<<radius;
    return 0;
}