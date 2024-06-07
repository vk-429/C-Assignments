#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    private:
        char name[20];
        int age;
    public:
        void setName(char *p)
        {
            strcpy(name,p);
        }
        char* getName()
        {
            return name;
        }
        void setAge(int a)
        {
            age=a;
        }
        int getAge()
        {
            return age;
        }
        void printPerson()
        {
            cout<<"\nName = "<<name;
            cout<<"\nAge = "<<age;
        }
};
class Employee:public Person
{
    private:
        int empid;
        int salary;
    public:
        void setEmpid(int id)
        {
            empid=id;
        }
        int getEmpid()
        {
            return empid;
        }
        void setSalary(int sal)
        {
            salary=sal;
        }
        int getSalary()
        {
            return salary;
        }
        void printEmp()
        {
            cout<<"\nEmployee ID = "<<empid;
            printPerson();
            cout<<"\nSalary = "<<salary<<endl;
        }
};
int main()
{
    Employee E;
    E.setName("Rajeev Kumar");
    E.setAge(23);
    E.setEmpid(1);
    E.setSalary(25000);
    E.printEmp();
    return 0;
}