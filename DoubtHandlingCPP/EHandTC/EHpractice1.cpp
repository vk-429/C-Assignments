#include<iostream>
using namespace std;
class Fraction
{
    private:
        float p;
        float q;
        float f;
    public:
        Fraction *setData(int n,int d)
        {
            p=n;
            q=d;
            return this;
        }
        void CalcFraction()
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
                cout<<"Why fear Rajnikant is here\n";
            f=p/q;
        }
        void showData()
        {
            cout<<"Fraction is "<<f<<endl;
        }

};
int main()
{
    Fraction F1,F2;
    F1.setData(2,2)->CalcFraction();
    F1.showData();
    return 0;
}