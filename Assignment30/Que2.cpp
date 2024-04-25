#include<iostream>
using namespace std;
/*
Here we're taking an example of taking input a string and a character
and we'll search  for the character within the string, if character is
found then it is ok otherwise we'll throw an exception
*/
int main()
{
    char str[50];
    char ch;
    cout<<"Enter a string : ";
    cin.getline(str,50);
    cout<<"Enter a character : ";
    cin>>ch;
    try
    {
        int i=0,flag=0;
        while(str[i])
        {
            if(ch==str[i])
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag!=1)
            throw("Character not found !");
    }
    catch(const char *p)
    {
        cout<<p<<"\n";
    }
    cout<<"Entered string is \""<<str<<"\" and character is '"<<ch<<"'\n";
    return 0;
    
}