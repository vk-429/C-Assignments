#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
    public:
        Time()
        {

        }
        Time(int h,int m)
        {
            hour=h;
            min=m;
        }
        void display()
        {
            cout<<"Hour = "<<hour<<" Min = "<<min<<endl;
        }
        bool operator>(Time T)
        {
            if(hour>T.hour)
            {
                return true;
            }
            else
            {
                if(hour==T.hour)
                {
                    if(min>T.min)
                        return true;
                    else return false;
                }
                return false;
            }
        }
        //friend bool operator>(Time,Time);
};
/*
bool operator>(Time T1,Time T2)
{
    if(T1.hour>T2.hour)
    {
        return true;
    }
    else
    {
        if(T1.hour==T2.hour)
        {
            if(T1.min>T2.min)
                return true;
            else return false;
        }
        return false;
    }
}
*/
int main()
{
    Time t1(5,20);
    Time t2(5,30);
    if(t1>t2)
    {
        cout<<"Hello"<<endl;
    }
    else
    {
        cout<<"Welcome"<<endl;
    }
    t1.display();
    t2.display();
    return 0;
}