#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Result after swapping :-"<<endl<<"a = "<<a<<" and b = "<<b;
    return 0;
}
