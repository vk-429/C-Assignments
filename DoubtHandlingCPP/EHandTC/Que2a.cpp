#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    /*if(b==0)
    cout<<"Invalid input !";
    else*/

    try
    {
        if(b==0)
            throw "Divide by Zero Error";//can't be modified latter on
        /*if(b==1)
            throw "B one nahi ho sakta";*/
        if(b==1)
            throw b;
        if(b==2)
            throw exception();
        c=a/b;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;   
    }
    catch (int x)
    {
        cout<<"Mai hu Shaktimnan"<<x<<endl;
    }
    catch(...)
    {
        cout<<"Rajnikant is here then no fear\n";
    }
    /*Exception generated here
    progamm terminated abnormally
    ab na to cout wali line chlegi or
    na return 0 chlega*/
    cout<<"Result = "<<c;
    /*
    pura progamm chla normally terminate hua
    */
    return 0;
}   