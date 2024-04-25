#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(){}
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }
        void display()
        {
            cout<<"Real = "<<real<<" Imaginary = "<<img<<endl;
        }
        operator int()
        {
            return real;
        } 
};
int main()
{
    Complex C1;
    C1.setData(3,4);
    int x;
    x=C1;
    cout<<C1<<"\n";
    cout<<x<<endl;
    return 0;
}