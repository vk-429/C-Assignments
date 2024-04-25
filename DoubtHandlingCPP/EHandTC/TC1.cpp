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
            real=x;
            img=x;
        }
        void display()
        {
            cout<<"Real is "<<real<<" Img is "<<img<<endl;
        }
};
int main()
{
    Complex C=5;//PC Called
    C.display();
    int x=5;
    //float y=x;
    //cout<<y<<x<<"\n";
    return 0;
}