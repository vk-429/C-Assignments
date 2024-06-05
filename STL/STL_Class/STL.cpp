#include<iostream>
using namespace std;

/*int add(int x,int y)
{
    return (x+y);
}*/
template<class T>
T add (T x,T y)
{
    return (x+y);
}
int main()
{
    float sum1=add<float>(2.5,3);
    int sum2=add<int>(5,3);
    cout<<"Addition is "<<sum1<<"\n";
    cout<<"Addition is "<<sum2<<"\n";
    return 0;
}