#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    /*if(b==0)
    cout<<"Invalid input !";
    else
        c=a/b;
    */

    try
    {
        if(b==0)
            throw "Divide by Zero Error";//can't be modified latter on
        c=a/b;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
        cout<<"Anything dividev by zero is undefined\n";
        exit(0);   
    }
   
    /*Exception generated here
    progamm terminated abnormally
    ab na to cout wali line chlegi or
    na return 0 chlega*/
    cout<<"Result = "<<c;
    return 0;
}