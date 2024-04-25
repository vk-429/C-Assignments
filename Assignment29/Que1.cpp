#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(){}
        Complex(int x)
        {
            real=x;
            img=x;
        }
        void showData()
        {
            cout<<"Real = "<<real<<" Imaginary = "<<img<<endl;
        }
};
int main()
{
    Complex C1;
    int x=5;
    C1=x;
    C1.showData();
    return 0;
}