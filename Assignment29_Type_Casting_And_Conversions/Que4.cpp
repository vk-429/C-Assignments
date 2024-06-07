#include<iostream>
using namespace std;
class Item
{
    private:
        int p;
        int q;
    public:
        Item(){}
        Item(int x,int y)
        {
            p=x;
            q=y;
        }
        void setData(int x,int y)
        {
            p=x;
            q=y;
        }
        int getP()
        {
            return p;
        }
        int getQ()
        {
            return q;
        }
        void display()
        {
            cout<<"P = "<<p<<" Q = "<<q<<endl;
        }
};
class Product
{
    private:
        int m;
        int n;
    public:
        Product(){}
        void setData(int x,int y)
        {
            m=x;
            n=y;
        }
        int getM()
        {
            return m;
        }
        int getN()
        {
            return n;
        }
        void display()
        {
            cout<<"M = "<<m<<" N = "<<n<<endl;
        }
        operator Item()
        {
            Item I(m,n);
            return I;
        }
};
int main()
{
    Item I1;
    Product P1;
    P1.setData(3,4);
    I1=P1;
    P1.display();
    I1.display();
    return 0;
}