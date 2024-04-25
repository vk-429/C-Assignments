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
        void showData();
};
void Complex::showData()
{
    cout<<"real = "<<a<<" img = "<<b<<endl;
}
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.showData();
    c2.showData();
    return 0;
} 

