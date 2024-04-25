#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showTime()
        {
            cout<<"Time is : "<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
        }
};
int main()
{
    Time t1,t2;
    t1.setTime(2,45,30);
    t2.setTime(6,20,15);
    t1.showTime();
    t2.showTime();
    return 0;
}