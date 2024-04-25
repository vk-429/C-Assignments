#include<iostream>
using namespace std;

class Rectangle
{
    public:
        int Area(int a,int b)
        {
            return (a*b);
        }
        float Area(float a,float b)
        {
            return (a*b);
        }
        float Area(int a,float b)
        {
            return (a*b);
        }
};
int main()
{
    Rectangle R1,R2,R3,R4,R5,R6;
    char a=5,b=6;
    cout<<"Area of Rectangle 1 = "<<R1.Area(2,4)<<endl;
    cout<<"Area of Rectangle 2 = "<<R2.Area(2.3f,4.5f)<<endl;
    cout<<"Area of Rectangle 3 = "<<R3.Area(2,4.5f)<<endl;
    cout<<"Area of Rectangle 4 = "<<R4.Area(a,b)<<endl;
    cout<<"Area of Rectangle 5 = "<<R5.Area(a,34)<<endl;
    cout<<"Area of Rectangle 6 = "<<R5.Area(a,34.3f)<<endl;
    return 0;
}