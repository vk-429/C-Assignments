#include<iostream>
using namespace std;
int main()
{
    char str[11];
    cout<<"Enter a mobile number : ";
    cin.getline(str,11);
    int i;
    try
    {
        for(i=0;str[i];i++);
        if(i!=10)
            throw("ERROR !\nEntered Mobile Number does'nt contain 10 digits");
    }
    catch(const char *p)
    {
        cout<<p<<"\n";
    }
    cout<<"Enterd Mobile Number is "<<str<<"\n";
    return 0;
}