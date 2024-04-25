#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
    private:
        int houseno;
        char name[20];
        int units;
        float bill;
    public:
        void getDetails()
        {
            cout<<"Enter house no. : ";
            cin>>houseno;
            cout<<"Enter name : ";
            cin.ignore();
            cin.getline(name,20);
            cout<<"Enter units : ";
            cin>>units;
        }
        void CalcBill()
        {
            if(units>=0&&units<=100)
                bill=units*1.20;
            if(units>100&&units<=200)
                bill=120+(units-100)*2;
            if(units>200)
                bill=240+(units-200)*3;
        }
        void showDetails()
        {
            cout<<endl<<"House No. : "<<houseno<<endl<<"Name : "<<name<<endl<<"Units : "<<units<<endl<<"Bill Balance : Rs."<<bill<<endl;
        }
};
int main()
{
    Bill B1,B2;
    B1.getDetails();
    B2.getDetails();
    B1.CalcBill();
    B2.CalcBill();
    B1.showDetails();
    B2.showDetails();
    return 0;
}