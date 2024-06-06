// // 9. A company has following details of their employees in the file 'emp.dat'
// //  a. Emp Id
// //  b. Emp Name
// //  c. Emp Address
// //  d. Emp Dept (Admin/Sales/Production/IT)
// //  e. Emp Phone
// //  f. Emp Age

//  Write a C++ program to read the above file. Create a new file such as Adm.dat,
//  Sal.dat, Pro.dat, IT.dat respectively to store the employee details according to their
//  department.

#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

class Employee
{
    private:
        int emp_id;
        string emp_name;
        string emp_address;
        string emp_dept;
        long long int emp_phone;
        int emp_age;
    public:
        Employee()
        {
            emp_id=0;
            emp_name="";
            emp_address="";
            emp_dept="";
            emp_phone=0;
            emp_age=0;
        }
        void read_file(string);
        void print_employee()
        {
            cout << emp_id << "\n";
            cout << emp_name << "\n";
            cout << emp_address << "\n";
            cout << emp_dept << "\n";
            cout << emp_phone << "\n";
            cout << emp_age << "\n\n";
        }
        void print_admin();
        void print_sales();
        void print_production();
        void print_it();
};

void Employee::print_it()
{
    ifstream fin;
    fin.open("C:/File/it.txt");
    if(!fin)
    {
        cout<<"Error Opening File!!!\n";
        return;
    }
    Employee E;
    fin>>E.emp_id;
    if(E.emp_id==0)
    {
        cout<<"\nNo Employee Record Found!!!\n";
        return;
    }
    do
    {
        fin.ignore();
        getline(fin,E.emp_name);
        getline(fin,E.emp_address);
        getline(fin,E.emp_dept);
        fin>>E.emp_phone;
        fin>>E.emp_age;
        E.print_employee();
    }while(fin>>E.emp_id);
    fin.close();
}

void Employee::print_production()
{
    ifstream fin;
    fin.open("C:/File/pro.txt");
    if(!fin)
    {
        cout<<"Error Opening File!!!\n";
        return;
    }
    Employee E;
    fin>>E.emp_id;
    if(E.emp_id==0)
    {
        cout<<"\nNo Employee Record Found!!!\n";
        return;
    }
    do
    {
        fin.ignore();
        getline(fin,E.emp_name);
        getline(fin,E.emp_address);
        getline(fin,E.emp_dept);
        fin>>E.emp_phone;
        fin>>E.emp_age;
        E.print_employee();
    }while(fin>>E.emp_id);
    fin.close();
}

void Employee::print_sales()
{
    ifstream fin;
    fin.open("C:/File/sal.txt");
    if(!fin)
    {
        cout<<"Error Opening File!!!\n";
        return;
    }
    Employee E;
    fin>>E.emp_id;
    if(E.emp_id==0)
    {
        cout<<"\nNo Employee Record Found!!!\n";
        return;
    }
    do
    {
        fin.ignore();
        getline(fin,E.emp_name);
        getline(fin,E.emp_address);
        getline(fin,E.emp_dept);
        fin>>E.emp_phone;
        fin>>E.emp_age;
        E.print_employee();
    }while(fin>>E.emp_id);
    fin.close();
}

void Employee::print_admin()
{
    ifstream fin;
    fin.open("C:/File/adm.txt");
    if(!fin)
    {
        cout<<"Error Opening File!!!\n";
        return;
    }
    Employee E;
    fin>>E.emp_id;
    if(E.emp_id==0)
    {
        cout<<"\nNo Employee Record Found!!!\n";
        return;
    }
    do
    {
        fin.ignore();
        getline(fin,E.emp_name);
        getline(fin,E.emp_address);
        getline(fin,E.emp_dept);
        fin>>E.emp_phone;
        fin>>E.emp_age;
        E.print_employee();
    }while(fin>>E.emp_id);
    fin.close();
}
void Employee::read_file(string file_name)
{
    ifstream fin(file_name);

    if(!fin)
    {
        cout<<"\nError Opening File!!!\n";
        exit(0);
    }
    
    ofstream fout1,fout2,fout3,fout4;
    fout1.open("C:/File/adm.txt");
    fout2.open("C:/File/sal.txt");
    fout3.open("C:/File/pro.txt");
    fout4.open("C:/File/it.txt");
    if(!fout1 || !fout2 || !fout3 || !fout4)
    {
        cout<<"\nSome Error Occured!!!\n";
        exit(0);
    }
    Employee E;
    fin>>E.emp_id;
    if(E.emp_id==0)
    {
        cout<<"\nNo Employee Record Found!!!\n";
        return;
    }
    do
    {
        fin.ignore();
        getline(fin,E.emp_name);
        getline(fin,E.emp_address);
        getline(fin,E.emp_dept);
        fin>>E.emp_phone;
        fin>>E.emp_age;
        if(E.emp_dept=="Admin") 
        {
            fout1<<E.emp_id<<"\n";
            fout1<<E.emp_name<<"\n";
            fout1<<E.emp_address<<"\n";
            fout1<<E.emp_dept<<"\n";
            fout1<<E.emp_phone<<"\n";
            fout1<<E.emp_age<<"\n\n";
        }
        else if(E.emp_dept=="Sales")
        {
            fout2<<E.emp_id<<"\n";
            fout2<<E.emp_name<<"\n";
            fout2<<E.emp_address<<"\n";
            fout2<<E.emp_dept<<"\n";
            fout2<<E.emp_phone<<"\n";
            fout2<<E.emp_age<<"\n\n";
        }
        else if(E.emp_dept=="Production")
        {
            fout3<<E.emp_id<<"\n";
            fout3<<E.emp_name<<"\n";
            fout3<<E.emp_address<<"\n";
            fout3<<E.emp_dept<<"\n";
            fout3<<E.emp_phone<<"\n";
            fout3<<E.emp_age<<"\n\n";
        }
        else
        {
            fout4<<E.emp_id<<"\n";
            fout4<<E.emp_name<<"\n";
            fout4<<E.emp_address<<"\n";
            fout4<<E.emp_dept<<"\n";
            fout4<<E.emp_phone<<"\n";
            fout4<<E.emp_age<<"\n\n";
    }
    } while (fin>>E.emp_id);
    fin.close();
    fout1.close();
    fout2.close();
    fout3.close();
    fout4.close();
    cout<<"\nFile Read Done!\n\n";
}

int main()
{
    Employee E;
    string s;
    cout<<"Enter File Path : ";
    cin>>s;
    E.read_file(s);
    int choice;
    cout<<"Which File Content You Want to See?\n";
    cout<<"1. Admin\n";
    cout<<"2. Sales\n";
    cout<<"3. Produnction\n";
    cout<<"4. IT\n\n";
    cout<<"Enter Your Choice : ";
    cin>>choice;
    cout<<"\n";
    switch(choice)
    {
        case 1:
            E.print_admin();
            break;
        case 2:
            E.print_sales();
            break;
        case 3:
            E.print_production();
            break;
        case 4:
            E.print_it();
            break;
        default:
            cout<<"Sorry, No File Exists!!!\n\n";
    }
    return 0;
}