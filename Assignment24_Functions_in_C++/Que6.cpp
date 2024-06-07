#include<iostream>
using namespace std;
void Swap(int &,int &);
int main()
{
    int x,y;
    cout<<"Enter two integers : ";
    cin>>x>>y;
    Swap(x,y);
    cout<<"After swapping :-"<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
    return 0;
}
void Swap(int &p,int &q)
{
    p=p+q;
    q=p-q;
    p=p-q;
}