#include<iostream>
using namespace std;
class dollar
{
    private:
        int d;
    public:
        dollar(){}
        dollar(int x)
        {
            d=x;
        }
        void display()
        {
            cout<<"Dollar = "<<d<<endl;
        }
};
int main()
{
    int x=50;
    cout<<"X = "<<x<<endl;
    dollar D;
    D=x;
    D.display();
    return 0;
}