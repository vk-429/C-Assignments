#include<iostream>
using namespace std;
class Rupee
{
    private:
        int x;
        int *p;
    public:
        Rupee()
        {
            cout<<"DC Called\n";
        }
        Rupee(int n)
        {
            cout<<"PC Called\n";
            x=n;
        }
        void display()
        {
            cout<<"Rupee is "<<x<<endl;
        }
    
};
int main()
{
    int x=5;
    Rupee r=x;
    r.display();
    return 0;
}