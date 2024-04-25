#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    private:
        char str[100];
    public:
        friend istream& operator>>(istream&,mystring&);
        friend ostream& operator<<(ostream&,mystring&);
        mystring operator!();
};
mystring mystring::operator!()
{
    mystring temp;
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]==32)
        {
            temp.str[i]=str[i];
            continue;
        }
        if(str[i]>=97&&str[i]<=122)
            temp.str[i]=str[i]-32;
        if(str[i]>=65&&str[i]<=90)
            temp.str[i]=str[i]+32;
    }
    temp.str[i]=0;
    return temp;
}
istream& operator>>(istream &mycin,mystring &MS)
{
    mycin.getline(MS.str,100);
    return mycin;
}
ostream& operator<<(ostream &mycout,mystring &MS)
{
    cout<<MS.str;
    return mycout;
}
int main()
{
    mystring S1,S2;
    cout<<"Enter the String : ";
    cin>>S1;
    S2=!S1;
    cout<<"After reversing the case : ";
    cout<<S2;
    return 0;
}