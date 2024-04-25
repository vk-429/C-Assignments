#include<iostream>
#define ll long long
using namespace std;

class Factorial
{
    private:
        int num;
        ll fact;
    public:
        Factorial(int n)
        {
            num=n;
            fact=1;
        }
        Factorial(const Factorial& F)
        {
            num=F.num;
            fact=F.fact;
        }
        ll calculate()
        {
            for(int i=2;i<=num;i++)
            {
                fact*=i;
            }
            return fact;
        }
        int getN()
        {
            return num;
        }
        ll getFact()
        {
            return fact;
        }
};

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    Factorial F1(n);
    F1.calculate();
    Factorial F2=F1;
    
    cout << "Factorial of " << n << " (original): " << F1.getFact() << endl;
    cout << "Factorial of " << n << " (copied)  : " << F2.getFact() << endl;

    return 0;
}