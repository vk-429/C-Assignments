#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            cout<<"DC Called\n";
        }
        Complex(int x)
        {
            cout<<"PC Called\n";
            real=x;
            img=x;
        }
        void display()
        {
            cout<<"Display Called\n";
            cout<<"Real is "<<real<<" Img is "<<img<<endl;
        }
};
int main()
{
    Complex C;//PC Called
    C=5;//Compiler's AO Called and then our PC called
    C.display();
    return 0;
}