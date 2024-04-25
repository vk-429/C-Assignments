#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        } 
        void showTime()
        {
            cout<<"Time is "<<h<<"hr "<<m<<"min "<<s<<"sec"<<endl;
        }
        void normalize()
        {
            if(m>59)
            {
                if(s>59)
                {
                    m++;
                    s-=60;
                    h++;
                    m-=60;
                }
                else
                {
                    h++;
                    m-=60;
                }
            }
            else if(s>59)
            {
                m++;
                s-=60;
            }
        }
        /*
        m=m+s/60;
        s=sec%60;
        h=h+m/60;
        m=m%60;
        */
        Time add(Time T)
        {
            Time temp;
            temp.h=h+T.h;
            temp.m=m+T.m;
            temp.s=s+T.s;
            temp.normalize();
            return temp;
        }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(2,35,45);
    t2.setTime(4,48,50);
    t1.normalize();
    t2.normalize();
    t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}