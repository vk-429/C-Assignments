#include<iostream>
using namespace std;
class Rupee
{
    private:
        float r;
    public:
        Rupee(){}
        Rupee(float x)
        {
            r=x;
        }
        float getR()
        {
            return r;
        }
        void display()
        {
            cout<<"Rupee = "<<r<<endl;
        }
};
class Dollar
{
    private:
        float d;
    public:
        Dollar(){}
        Dollar(float y)
        {
            d=y;
        }
        Dollar(Rupee R)
        {
            d=R.getR()/100;
        }
        void display()
        {
            cout<<"Dollar = "<<d<<endl;
        }
        operator Rupee()
        {
            return d*100;
        } 
};
int main()
{
    Rupee R=23;
    Dollar D=R;     //Rupee to Dollar Conversion
    D.display();
    R.display();
    D=5;
    R=D;            //Dollar to Rupee Conversion
    D.display();
    R.display();
    return 0;
}