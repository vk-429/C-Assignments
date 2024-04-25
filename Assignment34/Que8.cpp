#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Employee
{
    private:
        int empno;
        string emp_name;
    public:
        void AddEmployee()
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
            cout<<"Record Added Successfully\n\n";
        }
        void PrintAllEmployee()
        {
            ifstream fin;
            fin.open("c:/File/Employee.txt");
            Employee e;
            while(!fin.eof())//(fin.eof())
            {
                fin>>e.empno;
                fin.ignore();
                getline(fin,e.emp_name);
                e.Print();
            }
            fin.close();
        }
        void Print()
        {
            cout<<"Print Called\n";
            cout<<"Employee No. = "<<empno<<endl;
            cout<<"Name = "<<emp_name<<endl<<endl;
            cout<<"###############################################"<<endl<<endl;
        }
        void SearchEmployee(string name)
        {
            ifstream fin;
            fin.open("c:/File/Employee.txt");
            Employee e;
            int flag=0;
            while(!fin.eof())
            {
                fin>>e.empno;
                fin.ignore();
                getline(fin,e.emp_name);
                if(e.emp_name==name)
                {
                    cout<<"Record found :-\n";
                    e.Print();
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Record not found\n\n";
            fin.close();
        }
};
int main()
{
    int choice;
    Employee E;
    while(1)
    {
        cout<<"1.Add a New Record\n";
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
            case 2 : E.PrintAllEmployee();
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
                cout<<"Invalid Input !\n\n";
            } 

        }
    }
    return 0;
}