#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter the Nickname : ";
    cin.getline(str,20);
    int i,c1=0,c2=0,c3=0;
    try
    {
        for(i=0;str[i];i++)
        {
            if((str[i]>=48)&&(str[i]<=57))
                c1++;
            if(str[i]==' ')
                c2++;
            if(str[i]<48||(str[i]>57&&str[i]<65)||(str[i]>90&&str[i]<97)||str[i]>122)
                c3++;
        }
        if(c1==0||c2==0||c3==0||i>8)
            throw("Invalid Nickname ! Either Nickname has greater than 8 characters or does'nt contain a digit or a space a special symbol");
        else
            throw("Nickname is valid");
    }
    catch(const char *p)
    {
        cout<<p<< '\n';
    }
    cout<<str<<"\n";
    return 0;
}