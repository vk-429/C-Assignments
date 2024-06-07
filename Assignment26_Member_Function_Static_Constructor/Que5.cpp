#include<iostream>
using namespace std;
class Date
{
    private:
        int day,month,year;
    public:
        Date(int d,int m,int y)
        {
            day=d;
            month=m;
            year=y;
        }
        void DisplayDate()
        {
            cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;
        }
};
int main()
{
    Date D1(10,5,2009),D2(15,7,2016);
    D1.DisplayDate();
    D2.DisplayDate();
    return 0;
}