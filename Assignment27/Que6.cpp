#include<iostream>
#include<string.h>
using namespace std;
class CString
{
    private:
        char S[100];
    public:
        void input()
        {
            cout<<"Enter the string : ";
            cin.getline(S,20);
        }
        friend CString operator+(CString,CString);
        /*{
            CString temp;
            strcpy(temp.S,strcat(S,S1.S));
            return temp;   
        }*/
        void display()
        {
            cout<<S<<endl;
        }
        bool operator==(CString S1)
        {
            return (strcmp(S,S1.S)==0);
        }
};
CString operator+(CString S1,CString S2)
{
    CString temp;
    strcpy(temp.S,strcat(S1.S,S2.S));
    return temp;   
}
int main()
{
    CString S1,S2,S3;
    cout<<"First String :-\n";
    S1.input();
    cout<<"Second String :-\n";
    S2.input();
    S3=S1+S2;
    cout<<"First String :-\n";
    S1.display();
    cout<<"Second String :-\n";
    S2.display();
    cout<<"Concatinated String :-\n";
    S3.display();
    int r;
    r=(S1==S2);
    if(r==true)
        cout<<"\nStrings are Same\n";
    else
        cout<<"\nStrings are Not Same\n";
    return 0;
}