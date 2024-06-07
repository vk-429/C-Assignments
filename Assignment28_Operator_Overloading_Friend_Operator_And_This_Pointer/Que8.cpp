#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x;
        int y;
        int z;
    public:
        Coordinate()
        {
            x=0;
            y=0;
            z=0;
        }
        Coordinate(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void showCoordinate()
        {
            cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
        }
        Coordinate operator,(Coordinate C)
        {
            Coordinate temp;
            temp.x=C.x;
            temp.y=C.y;
            temp.z=C.z;
            return temp;
        }
};
int main()
{
    Coordinate C1(1,2,3),C2(6,7,8),C3;
    C3=(C1,C2);/*here we,re doing shallow copy,
    We need to do deep copy in case of pointers,strings etc.*/
    cout<<"1st Coordinate : ";
    C1.showCoordinate();
    cout<<"2nd Coordinate : ";
    C2.showCoordinate();
    cout<<"C3 = (C1,C2)   : ";
    C3.showCoordinate();
    Coordinate C4,C5;
    C4=(C1,C2,C3);
    C4.showCoordinate();
    return 0;
}