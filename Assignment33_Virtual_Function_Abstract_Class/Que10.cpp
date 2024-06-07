#include<iostream>
using namespace std;

class shape
{
    protected:
        double a;
        double b;
    public:
        void get_data(double a,double b=0)
        {
            this->a=a;
            this->b=b;
        }
        virtual void display_Area()=0;
};
class Square:public shape
{
    public:
        void display_Area()
        {
            double area=a*a;
            cout<<"Area of Square is "<<area<<"\n\n";
        }
};
class Parallelogram:public shape
{
    public:
        void display_Area()
        {
            double area=(a*b);
            cout<<"Area of Parallelogram is "<<area<<"\n\n";
        }
};
int main()
{
    shape *s;
    Square S1;
    Parallelogram P1;
    double a,b;
    int choice;
    while(1)
    {
        cout<<"1. Calculate Area of Square\n";
        cout<<"2. Calculate Area of Parallelogram\n";
        cout<<"3. Exit\n\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter the legnth of the side of the square : ";
            cin>>a;
            s = &S1;
            s->get_data(a);
        }
        else if(choice==2)
        {
            cout<<"Enter base and heignt of the parallelogram : ";
            cin>>a>>b;
            s = &P1;
            s->get_data(a,b);
        }
        else if(choice==3)
        {
            exit(0);
        }
        else
        {
            cout<<"Invalid Choice !\n\n";
            continue;
        }
        s->display_Area();
    }
    return 0;
}