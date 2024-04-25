#include<iostream>
using namespace std;
class Array
{
    private:
        int a[100];//we can do it dynamically, here to understand this only we are making this.
        const int size=100;
    public:
        Array()
        {

        }
        void setArray(int n,int index)
        {
            if(index>=size)
            {
                cout<<"Array Index out of Bound Exception"<<endl;
                exit(0);
            }
            a[index]=n;
        }
        void display(int index)
        {
            cout<<a[index]<<endl;
        }
        int operator[](int index)
        {
            if(index>=size)
            {
                cout<<"Array Index out of Bound Exception"<<endl;
                exit(0);
            }
            return a[index];
        }
};
int main()
{
    Array a,b;
    a.setArray(5,10);
    a.display(10);
    //b[20]=50;//Homework
    cout<<a[10]<<endl;
    cout<<a[150];
    return 0;
}