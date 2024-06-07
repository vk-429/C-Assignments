#include<iostream>
using namespace std;
class Marks
{
    private:
        int m1;
        int m2;
        int m3;
    public:
        void inputMarks()
        {
            cout<<"Enter marks of subject 1 : ";
            cin>>m1;
            cout<<"Enter marks of subject 2 : ";
            cin>>m2;
            cout<<"Enter marks of subject 3 : ";
            cin>>m3;
        }
        int getM1()
        {
            return m1;
        }
        int getM2()
        {
            return m2;
        }
        int getM3()
        {
            return m3;
        }
};
class TotalMarks:public Marks
{
    public:
        int getTotalMarks()
        {
            int tm;
            tm=getM1()+getM2()+getM3();
            return tm;
        }
};
class Percentage:public TotalMarks
{
    private:
        float percentage;
    public:
        void calcPercentage()
        {
            percentage=getTotalMarks()/3.0;
        }
        void displayPercentage()
        {
            cout<<"Percentage = "<<percentage<<endl;
        }
};
int main()
{
    Percentage P;
    P.inputMarks();
    P.calcPercentage();
    P.displayPercentage();
    return 0;
}