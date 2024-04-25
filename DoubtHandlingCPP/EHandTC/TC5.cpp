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
        void operator=(Rupee R)
        {
            cout<<"Operator = called for rupee\n";
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
            return x/100.0;
        }
        /*operator dollar()
        {
            cout<<"Dollar() called for Rupee\n";
            return x/100.0;
        }*/
        //operator dollar();
        //void operator =(dollar);
        //Rupee(dollar);
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
        dollar(Rupee R)
        {
            cout<<"PC Dollar(Rupee)(user defined to user defined) Called"<<endl;
            d=R.getX()/100;
        }
        void operator=(Rupee R)
        {
            cout<<"Operator = called for doller\n";
            d=R.getX()/100;
            //d=D.d;
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
            return d*100;
        }
        /*operator Rupee()//Doller to Rupee
        {
            cout<<"TC Rupee() called for daller\nRupee is above Doller\nWe can do it\n";
            return d*100;
        }*/
};
/*Rupee::operator dollar()
{
    cout<<"Dollar() called for Rupee\n";
    return x/100.0;
}*/
/*void Rupee::operator =(dollar D)
{
    cout<<"operator = called for rupee\n";
    x = D.getD()*100;
}
Rupee::Rupee(dollar D)
{
    cout<<"PC rupee(dollar) called\n";
    x = D.getD()*100;
}*/
int main()
{
    float x=5;
    float y=6;
    Rupee R1=(Rupee)x;//PM for Rupee Called
    R1.display();//Display for Rupee
    x=(float)R1;//typecast int() for Rupee
    cout<<x<<"\n";

    dollar D1=(dollar)y;//PM for Dollar
    D1.display();//Display for Dollar
    x=(float)D1;//typecast int() for Dollar
    cout<<x<<"\n";

    R1=(Rupee)D1;//TC float() + PC wale case me yha pe rupee ka ak refence bn rha hai or
    //D1 ne apne TC float() ko call kiya or float value return ki uske bad PM rupee chla
    //jisne is float value ko reference object ke x me assign krdiya uske bad AO ki help
    //se R1 me reference wala x aa gya
    R1.display();

    D1=(dollar)R1;
    D1.display();
    return 0;
}