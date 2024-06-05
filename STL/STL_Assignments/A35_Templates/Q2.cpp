#include<iostream>
using namespace std;

class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        void settime(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
        void showtime()
        {
            cout<<hr<<":"<<min<<":"<<sec<<"\n";
        }
        bool operator>(Time t)
        {
            if(hr>t.hr)return true;
            else if(hr<t.hr)return false;
            else if(min>t.min)return true;
            else if(min<t.min)return false;
            else if(sec>t.sec)return true;
            else return false;
        }
};

template<typename x>
x larger(x a, x b)
{
    if(a>b)return a;else return b;
}
int main()
{
    cout<<larger(5,7)<<'\n';
    cout<<larger('a','z')<<'\n';
    cout<<larger(2.4,7.9)<<'\n';
    Time t1,t2,t3;
    t1.settime(2,3,15);
    t2.settime(12,14,45);
    t3=larger(t1,t2);
    t3.showtime();
    return 0;
}