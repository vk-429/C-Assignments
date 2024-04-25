#include<iostream>
using namespace std;
void Prime(int);
int main()
{
    int n;
    cout<<"Inside Main function"<<endl;
    cout<<"Enter a number : ";
    cin>>n;
    Prime(n);
    return 0;
}
void Prime(int m)
{
    cout<<"Inside Prime function"<<endl;
    int i,flag=0;
    for(i=2;i<=(m/2);i++)
    {
        cout<<"i = "<<i<<endl<<"m = "<<m<<endl;
        if(m%i==0)
        {
            flag=1;
            cout<<"Flag updated"<<endl;
            break;  
        }
    }
    if(flag==1)
        cout<<"Number is not prime";
    else
        cout<<"Number is prime";
}