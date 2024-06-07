#include<iostream>
using namespace std;

class volume
{
    protected:
        double a;
        double vol;
    public:
        volume(){a=0;vol=0;}
        void get_data(int a)
        {
            this->a=a;
        }
        virtual void display_volume()=0;
};

class cube:public volume
{
    public:
        void display_volume()
        {
            vol=a*a*a;
            cout<<"Volume of the cube is "<<vol<<"\n\n";
        }
};

class sphere:public volume
{
    public:
        void display_volume()
        {
            vol=4*3.14*a*a*a/3;
            cout<<"Volume of the sphere is "<<vol<<"\n\n";
        }
};
int main()
{
    cube c1;
    sphere s1;
    volume *v1;
    int choice;
    double a;
    while(1)
    {
        cout<<"1. Calculate Volume of Cube\n";
        cout<<"2. Calculate Volume of Sphere\n";
        cout<<"3. Exit\n\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter length of the side of the cube : ";
                v1=&c1;
                break;
            case 2:
                cout<<"Enter the radius of the sphere : ";
                v1=&s1;
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice!\n\n";
                continue;
        }
        cin>>a;
        v1->get_data(a);
        v1->display_volume();
    }
    return 0;
}