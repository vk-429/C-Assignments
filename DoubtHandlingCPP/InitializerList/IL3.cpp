#include<iostream>
using namespace std;
class Ilist
{
    private:
        int x;
        const int y;
    public:
        Ilist(int a,int b):x(a),y(b)
        {
            //x=a;
            //y=b;
        }
        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<endl;
        }
};
int main()
{
    Ilist I1(3,4),I2(3,10);
    I1.display();
    I2.display();
    return 0;
}