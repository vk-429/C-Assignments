#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a Gmail id : ";
    cin>>str;
    char s1[10]="gmail.com",s2[10];
    int i,j,k,c1=0,c2=0,r;
    try
    {
        for(i=0;str[i];i++)
        {
            if(str[i]=='@')
                c1++;
            for(j=i,k=0;j<=(i+9),k<=9;j++,k++)
                s2[k]=str[j];
            r=strcmp(s1,s2);
            if(r==0)
                c2++;
        }
        if(c1==0||c2==0)
            throw("Invalid Gmail id ! Either id does'nt contain '@ or \"gmail.com\"");
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