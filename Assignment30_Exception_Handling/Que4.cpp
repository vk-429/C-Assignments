#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter an email address : ";
    cin>>str;
    int i,flag=0;
    try
    {
        for(i=0;str[i];i++)
        {
            if(str[i]=='@')
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            throw("ERROR !\nEmail does not contain @ symbol");
    }
    catch(const char *p)
    {
        cout<<p<<"\n";
    }
    cout<<"Entered email address is '"<<str<<"'\n";
    return 0;
}