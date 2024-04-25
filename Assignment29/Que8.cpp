#include<iostream>
using namespace std;
class Rupee
{
    private:
        int r;
    public:
        Rupee(){}
        Rupee(int x)
        {
            r=x;
        }
        operator int()
        {
            return r;
        }
        void display()
        {
            cout<<"Rupee = "<<r<<endl;
        }
};
int main()
{
    Rupee R=10;
    R.display();
    int x=R;
    cout<<"X = "<<x;
    return 0;
}