#include<iostream>
using namespace std;
bool isValidEmailID(string email)
{
    int AtOffset=-1;
    int DotOffset=-1;
    int length=0;
    for(int i=0;email[i];i++)
    {
        if(email[i]=='@')
            AtOffset=i;
        else if(email[i]=='.')
            DotOffset=i;
        length++;
    }
    if(AtOffset==-1||DotOffset==-1)
        return 0;
    if(AtOffset>DotOffset)
        return 0;
    return (DotOffset<(length-1));
}
int main()
{
    string email;
    cout<<"Enter an email address : ";
    cin>>email;
    int i,flag=0,flag1=0;
    try
    {
        if(isValidEmailID(email))
            cout<<"\nEmail ID is valid";
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"\nException Caught... \nInvalid Email ID!!!";
    }
    catch(...)
    {
        cout<<"\nDefault Exception";
    }
    cout<<"\nEntered email address is '"<<email<<"'\n";
    return 0;
}