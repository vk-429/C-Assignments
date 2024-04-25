#include<iostream>
using namespace std;
class Ilist
{
    private:
        int x;
        int y;
    public:
        Ilist(int a,int b):x(a),y(b)
        {
        }
        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<endl;
        }
};
int main()
{
    Ilist I1(3,4);
    I1.display();
    return 0;
}