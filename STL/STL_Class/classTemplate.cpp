#include<iostream>
using namespace std;
template< class T1=int ,class T2=int ,class T3=int >
class Multi
{
    public:
        T1 x;
        T2 y;
    T3 multiplication()
    {
        return (x*y);
    }
};
int main()
{
    Multi <int,int,float>m;
    m.x=5;
    m.y=6;
    cout<<"Multiplication = "<<m.multiplication()<<endl;
    return 0;
}