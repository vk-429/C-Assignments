#include<iostream>
using namespace std;
class Coords3D
{
    private:
        int x,y,z;
    public:
        Coords3D(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        Coords3D()
        {

        }
        void set()
        {
            cin>>x>>y>>z;
        }
        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }
        Coords3D operator,(Coords3D C)
        {
            x=C.z;
            y=C.y;
            z=C.x;
            return *this;
        }
};
int main()
{
    Coords3D C1(1,2,3);
    Coords3D C2(4,5,6),C3(3,4,5);//,C4;
    //C4=(C1,C2,C3);
    Coords3D C4=(C1,C2,C3);
    C4.display();
    return 0;
}