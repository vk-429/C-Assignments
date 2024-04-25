#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance()
        {
            feet=0;
            inches=0;
        }
        Distance(int f,int i)
        {
            feet=f;
            inches=i;
        }
        void showDistance()
        {
            cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
        }
        Distance operator()(int a,int b,int c)
        {
            Distance temp;
            temp.feet=a+c+5;
            temp.inches=a+b+15;
            return temp;;
        }
};
int main()
{
    Distance D1(3,8),D2(10,9),D3;
    D3=D1(3,4,5);
    cout<<"Distance D1  :  ";
    D1.showDistance();
    cout<<"Distance D2  :  ";
    D2.showDistance();
    cout<<"D3=D1(3,4,5) :  ";
    D3.showDistance();
    return 0;
}