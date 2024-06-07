#include<iostream>
using namespace std;
class Manager;
class Person
{
    private:
        char name[20];
        char address[40];
        long long ph_no;
    public:
        void inputPerson()
        {
            cin.ignore();
            cout<<"Enter Name : ";
            cin.getline(name,20);
            cout<<"Enter Address : ";
            cin.getline(address,40);
            cout<<"Enter Phone No. : ";
            cin>>ph_no;
        }
        char* getName()
        {
            return name;
        }
        friend void displayMax(Manager,int);
};
class Employee:public Person
{
    private:
        int eno;
    public:
        void inputEmp()
        {
            cout<<"Enter Employee No. : ";
            cin>>eno;
            inputPerson();
        }
};
class Manager:public Employee
{
    private:
        char des[40];
        char dep[30];
        int bas_sal;
    public:
        void inputManager()
        {
            static int i=1;
            cout<<"\nEnter details of manager "<<i<<" :-\n";
            inputEmp();
            cin.ignore();
            cout<<"Enter Designation : ";
            cin.getline(des,40);
            cout<<"Enter Department Name : ";
            cin.getline(dep,30);
            cout<<"Enter Basic Salary : ";
            cin>>bas_sal;
            cout<<"\n-----------------------------------\n";
            i++;
        }
        friend void displayMax(Manager,int);
        int getSal()
        {
            return bas_sal;
        }
};
void displayMax(Manager M[],int n)
{
    int max=0,i1;
    for(int i=0;i<n;i++)
    {
        if(M[i].getSal()>max)
        {
            max=M[i].getSal();
            i1=i;
        }
    }
    cout<<"\nManager With Highest Salary is "<<M[i1].getSal()<<endl;
    cout<<"And Manager's Name is "<<M[i1].getName()<<endl;
}
int main()
{
    int n;
    cout<<"How Many Manager's Details you want to Enter? ";
    cin>>n;
    Manager M[n];
    for(int i=0;i<n;i++)
        M[i].inputManager();
    displayMax(M,n);
    return 0;
}