#include<iostream>
using namespace std;
class Box
{
    private:
        int l,b,h;
        int volume;
    public:
        Box()
        {
            l=0;
            b=0;
            h=0;
        }
        void inputData()
        {
            cout<<"Enter length : ";
            cin>>l;
            cout<<"Enter breadth : ";
            cin>>b;
            cout<<"Enter hight : ";
            cin>>h;
        }
        void CalcVolume()
        {
            volume=l*b*h;
        }
        void showVolume()
        {
            cout<<"Volume = "<<volume<<endl;
        }
};
int main()
{
    Box B1,B2;
    B1.inputData();
    B2.inputData();
    B1.CalcVolume();
    B2.CalcVolume();
    B1.showVolume();
    B2.showVolume();
    return 0;
}