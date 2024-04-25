#include<iostream>
using namespace std;
class Item
{
    //public:
    private :
        int a,b;//instace member variable(by default garbage)
        static int k;//static member variable
    public :
        void setA(int x){a=x;}
        void setB(int y){b=y;}
        int getA(){return a;}
        int getB(){return b;}
        static void setK(int z){k=z;}//i1.a=2;i2.b=4}
        static int getK(){return k;}
};
int Item::k;//by default zero
int main()
{
    Item i1,i2;
    //i1.a=5;
    i1.setA(5);
    //cout<<"a="<<i2.a;
    cout<<"a="<<i2.getA();
    Item::setK(4);
    //i1.setK(5);
    cout<<"\nk="<<Item::getK();
    //i1.k=4;
    //Item::k=4;
    //cout<<"\nk="<<Item::k;
    return 0;

}