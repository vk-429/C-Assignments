#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
int ID;
class Bank_Customer
{
    private:
        string customer_name;
        long long int account_number;
        double balance;
    public:
        Bank_Customer(){customer_name="";account_number=0;balance=0.0;}
        void add_customer();
        void print_all_records();
        void print_vip();
        void print()
        {
            cout<<"Customer Name = "<<customer_name<<endl;
            cout<<"Account Number = "<<account_number<<endl;
            cout<<"Balance = "<<balance<<endl<<endl;
            cout<<"###############################################"<<endl<<endl;
        }
};

void Bank_Customer::print_vip()
{
    ifstream fin;
    fin.open("c:/File/vip.txt");
    if(!fin)
    {
        cout<<"\nSome Error Occured!!!\n\n";
        return;
    }
    string s;
    if(!getline(fin,s))
    {
        cout<<"\nNo Person to Display!!!\n\n";
        return;
    }
    cout<<"\nList of Customers Having Balance > 10000 :-\n\n";
    cout<<"###############################################\n\n";
    do
    {
        cout<<s<<"\n";
    }while(getline(fin,s));
    fin.close();
    cout<<"\n###############################################\n\n";
}

void Bank_Customer::print_all_records()
{
    ifstream fin;
    Bank_Customer C;
    fin.open("c:/File/customer.txt");
    if(!fin)
    {
        cout<<"\nUnable to Open The File!!!\n\n";
        return;
    }
    getline(fin,C.customer_name);
    if(C.customer_name=="")
    {
        cout<<"\nNo Customer Record is Added Till Yet!!!\n\n";
        return;
    }

    cout<<"\nThe List of Customers is as Follows :-\n\n";
    cout<<"###############################################\n\n";
    do
    {
        fin>>C.account_number;
        fin>>C.balance;
        fin.ignore();
        fin.ignore();
        C.print();
    } while(getline(fin,C.customer_name));
    fin.close();
}

void Bank_Customer::add_customer()
{        
    cout<<"\nEnter Customer Details :-\n";   
    cout<<"Enter Name of The Customer : ";
    cin.get();
    getline(cin,customer_name);
    cout<<"Enter Account Number : ";
    cin>>account_number;
    cout<<"Enter Balance : ";
    cin>>balance;
    ofstream fout1,fout2;
    fout1.open("c:/File/customer.txt",ios::app);
    if(!fout1)
    {
        cout<<"\nUnable to Open The File!!!\n\n";
        return;
    }
    fout1<<customer_name<<"\n";
    fout1<<account_number<<"\n";
    fout1<<balance<<"\n\n";
    fout1.close();
    if(balance>=10000)
    {
        fout2.open("c:/File/vip.txt",ios::app);
        if(!fout2)
        {
            cout<<"\nSome Error Occured!!!\n\n";
            return;
        }
        fout2<<customer_name<<"\n";
    }
    fout2.close();
    cout<<"\nRecord Added Successfully!\n\n";
}

int main()
{
    int choice;
    Bank_Customer C;

    while(true)
    {
        cout<<"\n                  # MENU #                    \n";
        cout<<"###############################################\n";
        cout<<"\n1. Add a New Record"<<endl;
        cout<<"2. Print All The Records"<<endl;
        cout<<"3. Display Name of Person Having Balance > 10000"<<endl;
        cout<<"4. Exit"<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                C.add_customer();
                break;
            case 2:
                C.print_all_records();
                break;
            case 3:
                C.print_vip();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\nInvalid Choice!!!\n\n";
        }
    }
    return 0;
}