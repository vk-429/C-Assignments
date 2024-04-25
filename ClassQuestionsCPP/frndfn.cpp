#include<iostream>
using namespace std;
class Item
{
    //public:
    private :
        int a,b;//instace member variable(by default garbage)
    public :
        friend void f1(Item);
        void setData(int x,int y){a=x; b=y;}
};
/*
class A
{
    public:
        void f1();
};
*/
void /*A::*/f1(Item i)
{
    cout<<"Sum is "<<i.a+i.b;
}
int main()
{
    Item i1;
    i1.setData(10,20);
    //A obj;
    /*obj.*/f1(i1);
    return 0;

}