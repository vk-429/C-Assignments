#include<iostream>
using namespace std;
class Rupee
{
    private:
        int x;
    public:
        Rupee()
        {
            cout<<"DC Called for Rupee\n";
        }
        Rupee(int n)
        {
            cout<<"PC Called for Rupee\n";
            x=n;
        }
        void display()
        {
            cout<<"Rupee is "<<x<<endl;
        }
        operator int()
        {
            cout<<"int() Called for Rupee\n";
            return x;
        }
        //friend operator int(Rupee);//invalid
};
int main()
{
    int x=5;
    Rupee r=x;
    r.display();
    x=(int)r;
    cout<<x<<"\n";
    return 0;
}