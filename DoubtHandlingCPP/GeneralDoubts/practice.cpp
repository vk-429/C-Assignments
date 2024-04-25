#include<iostream>
using namespace std;
int main()
{
    int x=20;
    int y,p,q,r;
    y=(++x)+((++x)+((++x)+((++x)+(((++x)+(++x))+(++x)))));
    cout<<x;
    cout<<endl;
    cout<<y;
    return 0;
}