#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance(){}
        Distance(int f,int i)
        {
            feet=f;
            inches=i;
        }
        Distance operator()(int a,int b,int c)
        {
            //Distance d;
            feet=a+c+5;
            inches=a+b+15;
            return *this;
            //return d;
        }
        void display()
        {
            cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
        }
        //friend Distance operator()(Distance d,int a,int b,int c);
};
/*
Distance operator()(Distance d,int a,int b,int c)
{
    Distance d;
    d.feet=a+c+5;
    d.inches=a+b+15;
    return d;
}
*/
int main()
{
    Distance d1(5,10);
    Distance d2;
    d1.display();
    d2=d1(10,20,30);
    d1.display();
    d2.display();
    return 0;
}