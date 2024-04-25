#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
    public:
        Time(){}
        Time(int h,int m)
        {
            hr=h;
            min=m;
        }
        int getMin()
        {
            return min;
        }
        void display()
        {
            cout<<"Hours = "<<hr<<" Minutes = "<<min<<endl;
        }
};
class Minutes
{
    private:
        int minutes;
    public:
        Minutes(){}
        Minutes(Time T)
        {
            minutes=T.getMin();
        }
        void display()
        {
            cout<<"Minutes = "<<minutes<<endl;
        }
};
int main()
{
    Time T1(2,30);
    T1.display();
    Minutes M1;
    M1.display();
    M1=T1;
    T1.display();
    M1.display();
    return 0;
}