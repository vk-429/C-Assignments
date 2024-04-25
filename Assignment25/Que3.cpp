#include<iostream>
using namespace std;
class Factorial
{
    private:
        int n;
        int fact;
    public:
        void setN(int x)
        {
            n=x;
        }
        int getN()
        {
            return n;
        }      
        void CalculateFact()
        {
            fact=1;
            int i;
            for(i=2;i<=n;i++)
                fact*=i;
            /*
            int f=1;
            int i;
            for(i=2;i<=n;i++)
                f*=i;
            fact=f;
            */
        }
        int getFact()
        {
            return fact;
        }
};
int main()
{
    Factorial F1,F2;
    F1.setN(6);
    F2.setN(7);
    F1.CalculateFact();
    F2.CalculateFact();
    cout<<"Factorial of "<<F1.getN()<<" is "<<F1.getFact()<<endl;
    cout<<"Factorial of "<<F2.getN()<<" is "<<F2.getFact()<<endl;
    return 0;
}