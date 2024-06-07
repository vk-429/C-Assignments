#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a Gmail id : ";
    cin>>str;
    string s1="gmail.com",s2;
    int i=0,c1=0,c2=0;
    try
    {
        for(i=0;str[i];i++)
        {
            if(str[i]=='@')
            {
                c1=1;
                break;
            }
        }
        s2=str.substr(i+1,9);
        if(s2==s1)
            c2=1;
        if(c1==0||c2==0)
            throw("Invalid Gmail id ! Either does'nt contain '@ or \"gmail.com\"");
        else
            throw("Gmail id is valid");
    }
    catch(const char *p)
    {
        cout<<p<< '\n';
    }
    cout<<str<<"\n";
    return 0;
}