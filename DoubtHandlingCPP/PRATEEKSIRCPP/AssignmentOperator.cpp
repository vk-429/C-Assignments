#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    private:
        char *a;
        int size;
    public:
        mystring()
        {
            cout<<"Default constructor called"<<endl;
            //a=(char*)malloc(1);
            size=1;
        }
        mystring(char* str)
        {
            cout<<"String Parameterised Constructor Called"<<endl;
            size=strlen(str);
            a=(char*)malloc(size+1);
            strcpy(a,str);
        }
        void change(char *str)
        {
            cout<<"Change called\n";
            free(a);
            size=strlen(str);
            a=(char*)malloc(size+1);   
            strcpy(a,str);
        }
        mystring(const mystring &s)//Deep Copy
        {
            cout<<"Copy Constructor Called\n";
            size=strlen(s.a);
            a=(char*)malloc(size+1);
            strcpy(a,s.a);
        }
        mystring operator=(const mystring &s)
        {
            cout<<"Assignment operator called\n";
            if(a==s.a)
            {
                return *this;
            }
            free(a);//To free existing location
            size=strlen(s.a);
            a=(char*)malloc(size+1);
            //cout<<"mai called\n";
            strcpy(a,s.a);//Here we're not copying address, we're doing deep copy here
            //cout<<"tum called\n";
            return *this;
        }
        void display()
        {
            cout<<a<<endl;
        }
};
int main()
{
    mystring S1("Prateek");
    mystring S2=S1;
    mystring S3;
    mystring S4("MySirG");
    mystring S5;
    S3=S1;
    //S4=S1;

    S1=S1;
    mystring s6;
    S5=S4=s6=S1;
    S1.change("Jain");

    S1.display();
    S2.display();
    S3.display();
    S4.display();
    S5.display();
    s6.display();
    return 0;
}