#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }
        void showData()
        {
            cout<<"real = "<<real<<" img = "<<img<<endl;
        }
};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.showData();
    c2.showData();
    return 0;
}