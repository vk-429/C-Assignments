#include<iostream>
using namespace std;

/*int add(int x,int y)
{
    return (x+y);
}*/
template<class T=int,class F=int,class P=int>
P add (T x,F y)
{
    return (x+y);
}
int main()
{
    float sum1=add<float,int,float>(2.5,3);
    int sum2=add(5,3);
    cout<<"Addition is "<<sum1<<"\n";
    cout<<"Addition is "<<sum2<<"\n";
    return 0;
}