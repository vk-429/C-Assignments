#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include <algorithm>
using namespace std;

class Employee
{
    private:
        int empno;
        string emp_name;
    public:
        Employee(){empno=0;emp_name="";}
        void AddEmployee();
        void PrintAllEmployee();
        void SearchEmployee(string);
        void Print()
        {
            cout<<"Employee No. = "<<empno<<endl;
            cout<<"Name = "<<emp_name<<endl<<endl;
            cout<<"###############################################"<<endl<<endl;
        }
};

void Employee::PrintAllEmployee()
{
    ifstream fin;
    fin.open("c:/File/Employee.txt");
    Employee e;
    fin>>e.empno;
    if(e.empno==0)
    {
        cout<<"No Employee Record is Added Till Yet!!!\n\n";
        return;
    }
    do
    {
        fin.ignore();
        getline(fin,e.emp_name);
        e.Print();
    }while(fin>>e.empno);//(fin.eof())
    fin.close();
}

void Employee::SearchEmployee(string name)
{
    ifstream fin;
    fin.open("c:/File/Employee.txt");
    Employee e;
    int flag=0;
    while(fin>>e.empno)
    {
        fin.ignore();
        getline(fin,e.emp_name);
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        transform(e.emp_name.begin(), e.emp_name.end(), e.emp_name.begin(), ::tolower);
        if(e.emp_name==name)
        {
            cout<<"\nEmployee Details Are as Follows :-\n\n";
            cout<<"###############################################\n\n";
            e.Print();
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"\nRecord not found!!!\n\n";
    fin.close();
}

void Employee::AddEmployee()
{
    ofstream fout;
    fout.open("C:/File/Employee.txt",ios::app);
    cout<<"Enter Employee No. : ";
    cin>>empno;
    cout<<"Enter Employee Name : ";
    cin.ignore();
    getline(cin,emp_name);
    fout<<empno<<"\n";
    fout<<emp_name<<"\n";
    fout<<"\n";
    fout.close();
    cout<<"\nRecord Added Successfully!\n\n";
}

int main()
{
    int choice;
    Employee E;
    while(1)
    {
        cout<<"\n                  # MENU #                    \n";
        cout<<"###############################################\n\n";
        cout<<"1.Add a New Employee Record\n";
        cout<<"2.Print All the Records\n";
        cout<<"3.Search for a Record\n";
        cout<<"4.Exit\n\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        cout<<"\n";
        switch(choice)
        {
            case 1 : E.AddEmployee();
                break;
            case 2 : 
                cout<<"The List of Employees is as Follows :-\n\n";
                cout<<"###############################################"<<endl<<endl;
                E.PrintAllEmployee();
                break;
            case 3 :
            {
                string name;
                cout<<"Enter the Employee Name You Want to Search : ";
                cin>>name;
                E.SearchEmployee(name);
                break;
            }
            case 4: exit(0);
            default : 
            {
                cout<<"Invalid Input!!!\n\n";
            } 

        }
    }
    return 0;
}