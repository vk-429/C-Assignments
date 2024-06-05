#include<iostream>
#include<string.h>
using namespace std;
char *strupr(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
    return s;
}
void f1()
{
    int age,vote;
    char nationality[20];
    try
    {
        cout<<"Enter your age : ";
        cin>>age;
        if(age<18)
            throw 1;
        cout<<"Enter your nationality\n";
        cin.ignore();
        cin.getline(nationality,20);
        int x;
        x=strcmp(strupr(nationality),"INDIAN");
        if(x)
            throw nationality;

        cout<<"\nVote for your favorit actor : \n";
        cout<<"\n1. Amir Khan";
        cout<<"\n2. Shahrukh Khan";
        cout<<"\n3. Akshay Kumar\n\n";
        cin>>vote;
        
        if(vote>3||vote<1)
            throw 2.0;
        cout<<"\nThanks for your vote\n";
    }
    catch(int e)
    {
        cout<<"\nYou are not eligible to cast your vote\n";
    }
    catch(char *n)
    {
        cout<<n<<" You have to be Indian\n";
    }
    catch(...)
    {
        cout<<"Invalid vote\n";
    }
    cout<<"END\n";
}
int main()
{
    f1();
    return 0;
}