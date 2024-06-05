#include<iostream>
using namespace std;
void f1()
{
    int age,vote;
    try
    {
        cout<<"Enter your age : ";
        cin>>age;
        if(age<18)
            throw 1;
        cout<<"\nVote for your favorit actor : \n";
        cout<<"\n1. Amir Khan";
        cout<<"\n2. Shahrukh Khan";
        cout<<"\n3. Akshay Kumar\n\n";
        cin>>vote;
        cout<<"\nThanks for your vote\n\n";
    }
    catch(int e)
    {
        cout<<"\nYou are not eligible to cast your vote\n\n";
    }
    cout<<"END\n";
}
int main()
{
    f1();
    return 0;
}