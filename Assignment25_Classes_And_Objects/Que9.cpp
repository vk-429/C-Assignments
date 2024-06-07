#include<iostream>
using namespace std;
class Circle
{
    private:
        int rad;
        float area;
    public:
        void setRadius(int r)
        {
            rad=r;
        }
        int getR()
        {
            return rad;
        }
        void CalcArea()
        {
            area=3.14*rad*rad;
        }
        float getArea()
        {
            return area;
        }
};
int main()
{
    Circle C1,C2;
    C1.setRadius(5);
    C2.setRadius(9);
    C1.CalcArea();
    C2.CalcArea();
    cout<<"Area of circle having radius "<<C1.getR()<<" is "<<C1.getArea()<<endl;
    cout<<"Area of circle having radius "<<C2.getR()<<" is "<<C2.getArea()<<endl;
    return 0.;
}