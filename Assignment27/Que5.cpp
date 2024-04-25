#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        void setData(int l,int m,int n)
        {
            x=l;
            y=m;
            z=n;
        }
        void showData()
        {
            cout<<x<<"  "<<y<<"  "<<z<<endl;
        }
        Numbers operator-()
        {
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
};
int main()
{
    Numbers N1,N2,N3,N4;
    cout<<"Original Numbers :-\n";
    N1.setData(3,4,5);
    N2.setData(5,6,7);
    N1.showData();
    N2.showData();
    N3=-N1;
    N4=-N2;
    cout<<"\nNumbers after negating :-\n";
    N3.showData();
    N4.showData();
    return 0;
}