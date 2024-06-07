#include<iostream>
using namespace std;
class Array
{
    private:
        int a[100];
        const int  size=100;
    public:
        Array()
        {

        }
        Array(int n,int index)
        {
            if(index>=size)
            {
                cout<<"Index is out of Bound Limit Exception !\n";
                exit(0);
            }
            a[index]=n;
        }
        int operator[](int index)
        {
            if(index>=size)
            {
                cout<<"Index is out of Bound Limit Exception !\n";
                exit(0);
            }
            return a[index];
        }
};
int main()
{
    Array A1(5,10),A2(34,89);
    cout<<A1[10]<<endl;
    cout<<A2[89]<<endl;
    Array A3(78,100);
    return 0;
}