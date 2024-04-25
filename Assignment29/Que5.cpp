#include<iostream>
using namespace std;
class Invert1
{
    private:
        float m;
        float n;
    public:
        Invert1(){}
        Invert1(float x,float y)
        {
            m=x;
            n=y;
        }
        float getM()
        {
            return m;
        }
        float getN()
        {
            return n;
        }
        void display()
        {
            cout<<"M = "<<m<<" N = "<<n<<endl;
        }
        operator float()
        {
            return m;
        }
};
class Invert2
{
    private:
        float p;
        float q;
    public:
        Invert2(){}
        Invert2(Invert1 S)
        {
            p=S.getM();
            q=S.getN();
        }
        void display()
        {
            cout<<"P = "<<p<<" Q = "<<q<<endl;
        }
};
int main()
{
    Invert1 S1(4,5);
    Invert2 D1;
    float tv;
    tv=S1;
    D1=S1;
    cout<<tv<<endl;
    S1.display();
    D1.display();
    return 0;
}