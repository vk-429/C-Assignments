#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a Username : ";
    cin>>str;
    int i,c1=0,c2=0;
    try
    {
        for(i=0;str[i];i++)
        {
            if((str[i]>=48)&&(str[i]<=57))
                c1++;
            if(str[i]<48||(str[i]>57&&str[i]<65)||(str[i]>90&&str[i]<97)||str[i]>122)
                c2++;
        }
        if(c1==0||c2==0||i>6)
            throw("Invalid Username ! Either Username has greater than 6 characters or does'nt contain a digit or a special symbol");
        else
            throw("Username is valid");
    }
    catch(const char *p)
    {
        cout<<p<< '\n';
    }
    cout<<str<<"\n";
    return 0;
}