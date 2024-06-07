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
            {
                c1++;
                if(i==0) throw("Nothing before \'@\' !\n");
                for(j=i+1,k=0;str[j],j<(i+9),k<9;j++,k++)
                    s2[k]=str[j];
                r=strcmp(s1,s2);
                if(r==0)
                    c2++;
                if(c2==0)
                    throw("Either Gmail ID doesn't contain \"gmail.com\" or have intemediate characters between '@' and \"gmail.com\" !\n");
                if(str[j]!='\0') throw "Gmail ID Has Extra Characters After \"@gmail.com\" !\n";
                break;
            }
        }
        if(c1==0)
            throw("Gmail ID doesn't contain '@' !\n");
        else
            throw("Gmail ID is valid!");
    }
    catch(const char *p)
    {
        cout<<p<< '\n';
    }
    cout<<str<<"\n";
    return 0;
}