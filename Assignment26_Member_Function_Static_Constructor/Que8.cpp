#include<iostream>
using namespace std;
class Bank
{
    private:
        int principal;
        int year;
        float roi;
        float interest;
    public:
        Bank()
        {
            principal=0;
            year=0;
            roi=0.0;
        }
        void inputData()
        {
            cout<<"Enter principal : ";
            cin>>principal;
            cout<<"Enter rate of interest : ";
            cin>>roi;
            cout<<"Enter year : ";
            cin>>year;
        }
        void CalcInterest()
        {
            interest=(principal*roi*year)/100.0;
        }
        void displayInterest()
        {
            cout<<"Interest is Rs."<<interest<<endl;
        }  
};
int main()
{
    Bank B1,B2;
    B1.inputData();
    B2.inputData();
    B1.CalcInterest();
    B2.CalcInterest();
    B1.displayInterest();
    B2.displayInterest();
    return 0;
}
