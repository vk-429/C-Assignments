#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        Time(){}
        Time(int t)
        {
            hr=t/3600;
            t%=3600;
            min=t/60;
            t%=60;
            sec=t;
        }
        void display()
        {
            cout<<"Time is :-  "<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
};
int main()
{
    int duration;
    cout<<"Enter time duration in seconds : ";
    cin>>duration;
    Time T1=duration;
    T1.display();
    return 0;
}
