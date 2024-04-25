#include<iostream>
using namespace std;
class Integer
{
    private:
        int x;
    public:
        Integer(){}
        Integer(int a)
        {
            x=a;
        }
        operator int()
        {
            return x;
        }
        void showData()
        {
            cout<<"Integer = "<<x<<endl;
        }
};
int main()
{
    int y;
    Integer I1(5);
    y=I1;
    I1.showData();
    cout<<"y = "<<y<<"\n";
    return 0;
}