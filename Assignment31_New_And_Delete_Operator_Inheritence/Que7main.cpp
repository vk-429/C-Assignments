#include<iostream>
#include<vector>
using namespace std;
class Employee
{
    private:
        int emp_code;
        char name[20];
    public:
        void inputEmployee()
        {
            cout<<"Enter Employee Code : ";
            cin>>emp_code;
            cin.ignore();
            cout<<"Enter Employee Name : ";
            cin.getline(name,20);
        }
        int getEmpCode() 
        {
            return emp_code;
        }
        virtual void displayDetails() 
        {
            cout << "Employee Code: " << emp_code << '\n';
            cout << "Name         : " << name << '\n';
        }
};
class Fulltime:public Employee
{
    private:
        int daily_rate;
        int no_days;
        int salary;
    public:
        void inputFullTime()
        {
            inputEmployee();   
            cout<<"Enter Daily Rate : ";
            cin>>daily_rate;
            cout<<"Enter No. of Days : ";
            cin>>no_days;
            cout<<"\n";
        }
        void displayDetails()
        {
            Employee::displayDetails();
            salary=no_days*daily_rate;
            cout<<"Daily Rate   : "<<daily_rate<<"\n";
            cout<<"No. of Days  : "<<no_days<<"\n";
            cout<<"Salary       : "<<salary<<"\n";
            cout<<"Status       : Fulltime\n";
            cout<<"\n--------------------------------------\n\n";
        }
};
class Parttime:public Employee
{
    private:
        int no_hours;
        int hourly_rate;
        int salary;
    public:
        void inputParttime()
        {
            inputEmployee();
            cout<<"Enter Hourly Rate  : ";
            cin>>hourly_rate;
            cout<<"Enter No. of Hours : ";
            cin>>no_hours;
            cout<<"\n";
        }
        void displayDetails()
        {
            Employee::displayDetails();
            salary=no_hours*hourly_rate;
            cout<<"Hourly Rate  : "<<hourly_rate<<"\n";
            cout<<"No. of hours : "<<no_hours<<"\n";
            cout<<"Salary       : "<<salary<<"\n";
            cout<<"Status       : Part time\n";
            cout<<"\n--------------------------------------\n\n";
        }
};
int main()
{
    int choice;
    vector<Employee*> E;
    do
    {
        cout<<"1.Enter a New Record\n";
        cout<<"2.Display All the Records\n";
        cout<<"3.Search a Record\n";
        cout<<"4.Exit\n\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        int n,m;
        switch(choice)
        {
            case 1:
            {
                int x;
                p:cout<<"\n1.Fulltime Employee\n";
                cout<<"2.Parttime employee\n";
                cout<<"3.Go Back\n";
                cout<<"\nSelect Anyone : ";
                cin>>x;
                switch (x)
                {
                    case 1:
                    {
                        Fulltime *F=new Fulltime;
                        F->inputFullTime();
                        E.push_back(F);
                    }
                    break;
                    case 2:
                    {
                        Parttime *P=new Parttime;
                        P->inputParttime();
                        E.push_back(P);
                    }
                    break;
                    case 3:
                        cout<<"\n";
                    break;
                    default:
                    {
                        cout<<"Please Enter a Valid Choice!\n";
                        goto p;
                    }
                }
                
            }
            break;
            case 2:
            {
                cout<<"\n";
                if(E.size()==0)
                    cout<<"Nothing to Display!\n\n";
                for (const auto& employee : E) {
                    employee->displayDetails();
                }
            }
            break;
            case 3:
            {
                int empCode;
                cout << "\nEnter employee code to search: ";
                cin >> empCode;
                bool found = false;
                for (const auto& employee : E) {
                    if (employee->getEmpCode() == empCode) {
                        cout << "\nEmployee Details :-\n\n";
                        employee->displayDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) 
                {
                    cout << "Employee not found!\n\n";
                }
            }
            break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout<<"Please Enter a Valid Choice!\n\n";
        }
    }while(choice!=4);
    for (const auto& employee : E) 
    {
        delete employee;
    }
    return 0;
}
