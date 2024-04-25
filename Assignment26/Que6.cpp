#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        char name[20];
        int rollno;
        int age;
    public:
        Student()
        {
            cout<<"Enter the name of the student : ";
            cin.getline(name,20);
            cout<<"Enter Roll No. : ";
            cin>>rollno;
            cout<<"Enter age : ";
            cin>>age;
            cin.ignore();
        }
        void showDetails()
        {
            cout<<"Name : "<<name<<" Roll No. : "<<rollno<<" Age : "<<age<<endl;
        }
};
int main()
{
    Student S1,S2;
    cout<<endl<<"Details of student 1 :-"<<endl;
    S1.showDetails();
    cout<<endl<<"Details of student 2 :-"<<endl;
    S2.showDetails();
    return 0;
}