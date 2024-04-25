#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int choice;
    char operation;
    while(1)
    {
        cout<<"1. Want to perform an arithmetic operation\n";
        cout<<"2.Exit\n";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the operator : ";
                cin>>operation;
                try
                {
                    if(operation!='+'&&operation!='-'&&operation!='*'&&operation!='/'&&operation!='%')
                        throw"Operator not found !";
                }
                catch(const char *e)
                {
                    cout<<e<<"\n\n";
                    goto p;
                } 
                cout<<"Enter two numbers : ";
                cin>>a>>b;
                switch(operation)
                {
                    case '+':
                        cout<<"Sum is "<<a+b<<"\n\n";
                        break;
                    case '-':
                        cout<<"Difference is "<<a-b<<"\n\n";
                        break;
                    case '*':
                        cout<<"Multiplication is "<<a*b<<"\n\n";
                        break;
                    case '/':
                        try
                        {
                            if(b==0)
                                throw("Divide by zero Error !");   
                        }
                        catch(const char *s)
                        {
                            cout<<s<<"\n\n";
                            goto p;
                        }
                        cout<<"Division is "<<a/b<<"\n\n";
                        break;
                    case '%':
                        cout<<"Modulo is "<<a%b<<"\n\n";
                }
                break;
            case 2:
                exit(0);
        }
        p:cout<<"################################################################\n\n";
    }
    return 0;
}