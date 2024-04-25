#include<iostream>
using namespace std;
class Numbers
{
    private:
        int a;
        int b;
    public:
        void inputAB()
        {
            cout<<"Enter two numbers : ";
            cin>>a>>b;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
};
class Sum:public Numbers
{
    private:
        int sum;
    public:
        void displaySum()
        {
            sum=getA()+getB();
            cout<<"\nSum = "<<sum;
        }
};
int main()
{
    Sum s;
    s.inputAB();
    s.displaySum();
    return 0;
}