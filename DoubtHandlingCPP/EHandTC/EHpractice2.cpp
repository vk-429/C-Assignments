#include<iostream>
using namespace std;
class Fraction
{
    private:
        float p;
        float q;
    public:
        void setData(float n,float d)
        {
            p=n;
            q=d;
        }
        void showMsg()
        {
            if(q==0)
            {
                cout<<"Division by zero error !\n";
                    exit(0);
            }
            if(q==1)
            {
                cout<<"Mai hu Shaktiman\n";
            }
            if(q==2)
            {
                cout<<"Why fear Rajnikant is here\n";
            }
        }
        void showData()
        {
            try
            {
                throw *this;
            }
            catch(Fraction F)
            {
                F.showMsg();
            }   
            cout<<"Fraction is "<<p/q<<endl;
        }

};
int main()
{
    Fraction F1;
    F1.setData(2,2);
    F1.showData();
    return 0;
}