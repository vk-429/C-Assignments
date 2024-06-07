#include<iostream>
using namespace std;
/*
Here we're taking the example of division of a number by
another number to demonstrate the use of try and catch
*/
int main()
{
    int a,b,f;
    cout<<"Enter Numerator and Denominator : ";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw"Divide by zero error";
        f=a/b;
        if(b!=0)
            throw b;//throwing an intezer
    }
    catch(const char *s)//char pointer for recieving the address of the thrown string
    {//using const here because thrown string can't be changed
        cout<<s<<"\n";
        exit(0);
    }
    catch(int x)//int type of ardument for recieving int type of value thrown
    {
        cout<<"Denominator = "<<x<<"\nNo Problem !\nYou can calculate fraction\n";
    }
    catch(...)//default catch statement, when no catch statement matches, this catch encounters
    {
        cout<<"Other Exception\n";
    }
    cout<<"Fraction = "<<f;
    return 0;
}