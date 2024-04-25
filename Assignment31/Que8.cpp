#include<iostream>
using namespace std;
class Customer 
{
    private:
        char name[20];
        long long ph_no;
    public:
        void inputCR()
        {
            static int x=1;
            cout<<"\nEnter Details of Customer "<<x<<" :-\n";
            cin.ignore();
            cout<<"Enter Customer Name : ";
            cin.getline(name,20);
            cout<<"Enter Customer Phone No. : ";
            cin>>ph_no;
            x++;
        }
        void displayCR()
        {
            static int x=1;
            cout<<"\nDetails of Customer "<<x<<" :-\n";
            cout<<"Customer Name : "<<name<<"\n";
            cout<<"Customer Phone No. : "<<ph_no<<"\n";
            x++;
        }
};
class Depositor:public Customer
{
    private:
        long long acc_no;
        int balance;
    public:
        void inputDR()
        {
            inputCR();
            cout<<"Enter Customer Account No. : ";
            cin>>acc_no;
            cout<<"Enter Balance : ";
            cin>>balance;
        }
        void displayDR()
        {
            displayCR();
            cout<<"Customer Account No. : "<<acc_no<<"\n";
            cout<<"Balance : "<<balance<<'\n';
        }
};
class Borrower:public Depositor
{
    private:
        int loan_no;
        int loan_amt;
    public:
        void inputBR()
        {
            inputDR();
            cout<<"Enter Loan No. : ";
            cin>>loan_no;
            cout<<"Enter Loan Amount : ";
            cin>>loan_amt;
            cout<<"\n-----------------------------------------\n";
        }
        void displayBR()
        {
            displayDR();
            cout<<"Loan No. : "<<loan_no<<"\n";
            cout<<"Loan Amount : "<<loan_amt<<"\n";
            cout<<"\n-----------------------------------------\n";
        }
};
int main()
{
    int n;
    cout<<"Enter No. of Customer Details You Want to Enter : ";
    cin>>n;
    Borrower B[n];
    for(int i=0;i<n;i++)
        B[i].inputBR();
    for(int i=0;i<n;i++)
        B[i].displayBR();
    return 0;
}