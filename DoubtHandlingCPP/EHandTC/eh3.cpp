#include<iostream>
#include<string.h>
using namespace std;
class DivideByZero:public exception
{
    public:
    const char* what() const noexcept//throw()
    {
        return "Divide by zero Exception";
    }
};
char *strupr(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
    return s;
}
void f2()
{
    int balance=5000,amt;
    cout<<"Enter amount to withdraw : ";
    cin>>amt;
    if(amt>balance)
        throw 1;
    balance-=amt;
    cout<<"New balance is : "<<balance<<"\n";
    
    cout<<"END\n";
}
void f3()
{
    int a,b;
    //try
    //{
        cout<<"Enter two numbers : ";
        cin>>a>>b;
        if(b==0)
            throw *(new DivideByZero);
        int c=a/b;
        cout<<"Result is "<<c<<endl;
    //}
    /*catch(DivideByZero ex)
    {
        cout<<ex.what();
    }
    catch(exception e)
    {

    }*/
}
int main()
{
    try
    {
        /* code */f3();
    }
    catch(const exception& e)
    {
        cout<< e.what() << '\n';
    }
    cout<<"main\n";
    
    return 0;
}