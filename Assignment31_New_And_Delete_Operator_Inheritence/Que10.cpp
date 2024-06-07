#include<iostream>
using namespace std;
class Worker
{
    private:
        int code;
        char name[20];
        float salary;
    public:
        void inputWorker()
        {
            cout<<"Enter Code : ";
            cin>>code;
            cout<<"Enter Name : ";
            cin.ignore();
            cin.getline(name,20);
            cout<<"Enter Salary : ";
            cin>>salary;
        }
        float getSalary()
        {
            return salary;
        }
        void displayWorker()
        {
            cout<<"Employee Code    : "<<code<<"\n";
            cout<<"Employee Name    : "<<name<<"\n";
            cout<<"Salary           : "<<salary<<"\n";
        }
};
class Officer
{
    private:
        float DA;
        float HRA;
    public:
        void inputOfficer()
        {
            cout<<"Enter DA : ";
            cin>>DA;
            cout<<"Enter HRA : ";
            cin>>HRA;
        }
        float getDA()
        {
            return DA;
        }
        float getHRA()
        {
            return HRA;
        }
        void displayOfficer()
        {
            cout<<"DA               : "<<DA<<"\n";
            cout<<"HRA              : "<<HRA<<"\n";
        }
};
class Manager:public Worker,public Officer
{
    private:
        float TA;
        float gross_salary;
    public:
        void inputManager()
        {
            static int x=1;
            cout<<"Enter Details of Manager "<<x<<" :-\n";
            inputWorker();
            inputOfficer();
            cout<<"\n----------------------------------------\n\n";
            x++;
        }
        void displayManager()
        {
            static int x=1;
            TA = (0.1*getSalary());
            gross_salary = getSalary()+getDA()+getHRA()+TA;
            cout<<"Details of Manager "<<x<<" :-\n";
            displayWorker();
            displayOfficer();
            cout<<"TA               : "<<TA<<"\n";
            cout<<"Gross Salary     : "<<gross_salary<<"\n";
            cout<<"\n----------------------------------------\n\n";
            x++;
        }
};
int main()
{
    int n;
    cout<<"Enter Manager Count : ";
    cin>>n;
    Manager M[n];
    cout<<"\n";
    for(int i=0;i<n;i++)
        M[i].inputManager();
    cout<<"Manager Information\n\n";
    for(int i=0;i<n;i++)
        M[i].displayManager();
    return 0;
}