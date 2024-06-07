#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        Time()
        {
            hr=0;
            min=0;
            sec=0;
        }
        bool operator==(Time T)
        {
            return (hr==T.hr&&min==T.min&&sec==T.sec);
        }
        friend istream& operator>>(istream &,Time&);
        friend ostream& operator<<(ostream &,Time&);
};
istream& operator>>(istream &mycin,Time &T)
{
    
    cout<<"---------------------"<<endl;
    cout<<"Enter hours   : ";
    mycin>>T.hr;
    cout<<"Enter minutes : ";
    mycin>>T.min;
    cout<<"Enter seconds : ";
    mycin>>T.sec;
    T.min=T.min+T.sec/60;
    T.sec%=60;
    T.hr=T.hr+T.min/60;
    T.min%=60;
    if(T.hr>24)
    {
        cout<<"Invalid Time !";
        exit(0);
    }
    return mycin;
}
ostream& operator<<(ostream &mycout,Time &T)
{
    mycout<<endl<<"Hours : "<<T.hr<<endl<<"Minutes : "<<T.min<<endl<<"Seconds : "<<T.sec<<endl<<endl;
    return mycout;
}
int main()
{
    Time T1,T2,T3,T4;
    cout<<"Enter First Time "<<endl;
    cin>>T1;
    cout<<endl<<"First Time ";
    cout<<T1;
    cout<<"Enter Second Time "<<endl;
    cin>>T2;
    cout<<endl<<"Second Time ";
    cout<<T2;
    int r;
    r=(T1==T2);
    if(r==true)
        cout<<"Times are Same";
    else
        cout<<"Times are Not Same";
    //cout<<T1;
    
}