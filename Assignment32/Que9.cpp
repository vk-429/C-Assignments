#include<iostream>
using namespace std;

class Area
{
    public:
        Area(int l,int b)
        {
            int area;
            area=l*b;
            cout<<"Area of Rectangle is "<<area<<"\n\n";
        }
        Area(float base,float hight)
        {
            float area;
            area=(base*hight)/2;
            cout<<"Area of Triangle is "<<area<<"\n\n";
        }
        Area(float radius)
        {
            float area;
            area= (3.1416*radius*radius);
            cout<<"Area of Circle is "<<area<<"\n\n";
        }
};

int main()
{
    int choice;
    do
    {
        cout<<"1.Triangle\n";
        cout<<"2.Rectangle\n";
        cout<<"3.Circle\n";
        cout<<"4.Exit\n\n";
        cout<<"Enter your choice :-";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                float H,B;
                cout<<"Enter Hight and Base of the Triangle : ";
                cin>>H>>B;
                Area T(H,B);
            }
                break;
            case 2:
            {
                int l,b;
                cout<<"Enter Lenght and Breadth of Rectangle : ";
                cin>>l>>b;
                Area R(l,b);
            }
                break;
            case 3:
            {
                float r;
                cout<<"Enter Radius of the Circle : ";
                cin>>r;
                Area C(r);
            }
                break;
            case 4:
                cout<<"Exiting Program\n";
                break;
            default:
                cout<<"Invalid choice! Please try again\n";
        }
    } while (choice!=4);
    return 0;
}