#include<iostream>
using namespace std;
class dollar;
class Rupee
{
    private:
        float x;
    public:
        Rupee()
        {
            cout<<"DC Called for Rupee\n";
        }
        /*Rupee(dollar D)
        {
            cout<<"Rupee(Dollar) Called"<<endl;
            x=D.getD()*100;
        }*/
        Rupee(const Rupee &R)
        {
            cout<<"Copy Costructor(Ruppe) Called\n";
            x=R.x;
        }
        Rupee(float n)
        {
            cout<<"PC Called for Rupee\n";
            x=n;
        }
        float getX()
        {
            return x;
        }
        void display()
        {
            cout<<"Rupee is "<<x<<endl;
        }
        operator float()
        {
            cout<<"TC float() Called for Rupee\n";
            return x;
        }
        /*operator dollar()
        {
            cout<<"Dollar() called for Rupee\n";
            return x/100.0;
        }*/
        //operator dollar();
};
class dollar
{
    private:
        float d;
    public:
        dollar()
        {
            cout<<"DC Called for Dollar"<<endl;
        }
        dollar(float n)
        {
            cout<<"PC called for Dallor"<<endl;
            d=n;
        }
        dollar(const dollar &D)
        {
            cout<<"Copy Costructor(Dollar) Called\n";
            d=D.d;
        }
        /*dollar(Rupee R)
        {
            cout<<"PC Dollar(Rupee)(user defined to user defined) Called"<<endl;
            d=R.getX()/100;
        }*/
        dollar operator=(dollar D)
        {
            cout<<"operator = for D1=D called\n";
            dollar temp,t;
            temp.d=D.d;
            return temp.d>0?temp:t;
        }
        dollar operator=(Rupee R)
        {
            cout<<"Operator = called for doller\n";
            dollar D;
            D.d=R.getX()/100;
            return D;
        }
        float getD()
        {
            return d;
        }
        void display()
        {
            cout<<"Dollar is "<<d<<endl;
        }
        operator float()
        {
            cout<<"TC float() Called for Dollar\n";
            return d;
        }
        operator Rupee()//Doller to Rupee
        {
            cout<<"TC Rupee() called for daller\n";
            return d*100;
        }
};
int main()
{
    float x=5;
    float y=6;
    Rupee R1=(Rupee)x;//PM for Rupee Called
    R1.display();//Display for Rupee
    x=R1;//typecast int() for Rupee
    cout<<x<<"\n";

    dollar D1=(dollar)y;//PM for Dollar
    D1.display();//Display for Dollar
    x=D1;//typecast int() for Dollar
    cout<<x<<"\n";

    R1=D1;
    R1.display();

    D1=(dollar&)R1;
    D1.display();
    return 0;
}