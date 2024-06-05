#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int x)
        {
            cout<<"Parameterised Constructor Called\n";
            real=x;
            img=x;
        }
        void display()
        {
            cout<<"Real is "<<real<<" Img is "<<img<<endl;
        }
        Complex* operator=(int x)
        {
            real=x;
            img=x;
            return this;
        }
};
int main()
{
    Complex C=5;//PC Called
    C.display();
    C=10;
    C.display();
    int x=5;
    //float y=x;
    //cout<<y<<x<<"\n";
    return 0;
}