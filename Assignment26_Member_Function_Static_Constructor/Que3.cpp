#include<iostream>
using namespace std;
class Cube
{
    private:
        int side;
        int volume;
    public:
        Cube(){}
        Cube(int x)
        {
            side=x;
        }
        int getSide()
        {
            return side;
        }
        void CalcVolume()
        {
            volume=side*side*side;
        }
        int getVolume()
        {
            return volume;
        }
};
int main()
{
    Cube c1(4),c2(8),c3(15),c4;
    c1.CalcVolume();
    c2.CalcVolume();
    c3.CalcVolume();
    cout<<"Volume of the cube having side "<<c1.getSide()<<" is "<<c1.getVolume()<<endl;
    cout<<"Volume of the cube having side "<<c2.getSide()<<" is "<<c2.getVolume()<<endl;
    cout<<"Volume of the cube having side "<<c3.getSide()<<" is "<<c3.getVolume()<<endl;
    return 0;
}