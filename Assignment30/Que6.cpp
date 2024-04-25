#include<iostream>
using namespace std;
int main()
{
    char str[7];
    cout<<"Enter an area pin code : ";
    cin.getline(str,7);
    int i;
    try
    {
        for(i=0;str[i];i++);
        if(i!=6)
            throw("ERROR !\nEntered Pin Code does'nt contain 6 digits\n");
    }
    catch(const char *p)
    {
        cout<<p;
    }
    cout<<"Entered Pin Code :- "<<str;
    return 0;
}