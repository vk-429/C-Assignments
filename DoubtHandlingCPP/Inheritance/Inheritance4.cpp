#include<iostream>
using namespace std;

class Flight
{
    public:
        void Search()
        {
            cout<<"Search Flight"<<endl;
        }
        virtual void Book()
        {
            cout<<"Book Flight"<<endl;
        }
};
class AirIndia:public Flight
{
    public:
    void Book()
    {
        cout<<"AirIndia Book Flight"<<endl;
    }
};
class Spicejet:public Flight
{
    public:
    void Book()
    {
        cout<<"Spicejet Book Flight"<<endl;
    }
};
int main()
{
    Flight *flight1,*flight2;
    AirIndia ai;
    Spicejet sj;
    // Flight fl;
    // fl.Book();
    cout<<"1.AirIndia\n";
    cout<<"2.Spicejet\n\n";
    int choice;
    cout<<"Enter choice : ";
    cin>>choice;
    if(choice==1)
        flight1=&ai;
    if(choice==2)
        flight1=&sj;
    flight1->Search();
    flight1->Book();
/*
    flight2=&sj;
    flight2->Search();
    flight2->Book();
    */
    //abhi virtual nhi bnaya to compile time pe binding hui hai
    //ab mai vitual bna diya to run time pe binding hogi
    return 0;
}