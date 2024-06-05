#include<iostream>
using namespace std;

class Myexception: public exception
{
    int error_indicator;
    public:
        void printErrorMSG() const noexcept
        {
            if(error_indicator==0)
            {
                cout<<"Division by zero error !\n";
                    exit(0);
            }
            if(error_indicator==1)
            {
                cout<<"Mai hu Shaktiman\n";
            }
            if(error_indicator==2)
            {
                cout<<"Why fear Rajnikant is here\n";
            }
        }
        void set_error_indicator(int e)
        {
            error_indicator=e;
        }
};

int main()
{
    double p,q;
    double fraction;
    cout<<"Enter p and q : ";
    cin>>p>>q;
    Myexception ME;
    try
    {
        if(q==0 || q==1 || q==2)
        {
            ME.set_error_indicator(q);
            throw ME;
        }
        fraction=p/q;
    }
    catch(const Myexception& me)
    {
        me.printErrorMSG();
    }

    cout<<fraction<<"\n";
    return 0;
}

