#include<iostream>
using namespace std;
//static global variable is a myth
int A;//global variabe
class Complex
{
    private:
        int a,b;//instance member variable
    public:
        void setData(int x,int y)//instance member function
        {
            a=x;//local variable
            b=y;
        }
        void showData()
        {
            cout<<"real = "<<a<<" img = "<<b<<endl;
        }
};
void f1()
{
    int x=0;//local variable
    static int y;//static local variable
    x++;
    y++;
    cout<<"\nx="<<x<<" y="<<y;
}
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.showData();
    c2.showData();
    f1();
    f1();
    return 0;
} 

