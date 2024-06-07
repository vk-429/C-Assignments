#include<iostream>
using namespace std;

class FLOAT
{
    private:
        float x;
    public:
        void setData(float x)
        {
            this->x=x;
        }
        void showData()
        {
            cout<<x<<"\n";
        }
        float getX()
        {
            return x;
        }
        FLOAT(){}
        FLOAT(const FLOAT &F)
        {
            x=F.x;
        }
        FLOAT operator+(FLOAT F)
        {
            FLOAT temp;
            temp.x=x+F.x;
            return temp;
        }
        FLOAT operator-(FLOAT F)
        {
            FLOAT temp;
            temp.x=x-F.x;
            return temp;
        }
        FLOAT operator*(FLOAT F)
        {
            FLOAT temp;
            temp.x=x*F.x;
            return temp;
        }
        FLOAT operator/(FLOAT F)
        {
            FLOAT temp;
            temp.x=x/F.x;
            return temp;
        }
};
int main()
{
    FLOAT F1,F2;
    FLOAT F3;
    F1.setData(3.25f);
    F2.setData(4.45f);
    F3=F1+F2;
    FLOAT F4;
    F4=F2-F1;
    FLOAT F5;
    F5=F3*F4;
    FLOAT F6;
    F6=F4/F5;
    cout<<"F1 = "<<F1.getX()<<"\n";
    cout<<"F2 = "<<F2.getX()<<"\n";
    cout<<"F1+F2 = "<<F3.getX()<<"\n";
    cout<<"F2-F3 = "<<F4.getX()<<"\n";
    cout<<"F3*F4 = "<<F5.getX()<<"\n";
    cout<<"F4/F5 = "<<F6.getX()<<"\n";
    return 0;
}