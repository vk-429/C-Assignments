#include<iostream>
using namespace std;

class Addition
{
    private:
        int x;
    public:
        Addition(){}
        Addition(int x)
        {
            this->x=x;
        }
        int getX()
        {
            return x;
        }
        int add(int a,int b,int c=0)
        {
            return a+b+c;
        }
        // float add(int a,float b,int c=0)
        // {
        //     return a+b+c;
        // }
        // float add(int a,float b,float c=0.0)
        // {
        //     return a+b+c;
        // }
        // float add(int a,int b,float c=0.0)
        // {
        //     return a+b+c;
        // }
        float add(float a,float b,float c=0.0)
        {
            return a+b+c;
        }
        // float add(float a,int b,float c=0.0)
        // {
        //     return a+b+c;
        // }
        // float add(float a,int b,int c=0)
        // {
        //     return a+b+c;
        // }
        // float add(float a,float b,int c=0)
        // {
        //     return a+b+c;
        // }
};

int main()
{
    Addition a1,a2,a3,a4;
    cout<<"a1.add(4,5) = "<<a1.add(4,5)<<"\n";
    cout<<"a1.add(4,5,9) = "<<a2.add(4,5,9)<<"\n";
    cout<<"a1.add(4.3,5.5) = "<<a3.add(4.3f,5.5f)<<"\n";
    cout<<"a1.add(4.2,5.1,9.4) = "<<a4.add(4.2f,5.1f,9.4f)<<"\n";
    return 0;
}