#include<iostream>
using namespace std;
class Student
{
    private:
        int rollno;
        char name[20];
    public:
        void inputS()
        {
            static int x=1;
            cout<<"\nEnter Details of Student "<<x<<" :-\n";
            cout<<"Enter Roll No. : ";
            cin>>rollno;
            cin.ignore();
            cout<<"Enter Student Name : ";
            cin.getline(name,20);
            x++;
        }
        void displayS()
        {
            static int x=1;
            cout<<"\nMarklist of Student "<<x<<" :-\n";
            cout<<"Roll No. : "<<rollno<<"\n";
            cout<<"Name     : "<<name<<"\n";
            x++;
        }
};
class StudentExam:public Student
{
    private:
        int sub[6];
    public:
        void inputSE()
        {
            inputS();
            for(int i=0;i<6;i++)
            {
                cout<<"Enter Marks for Subject "<<(i+1)<<" : ";
                cin>>sub[i];
            }
        }
        void displaySE()
        {
            displayS();
            for(int i=0;i<6;i++)
            {
                cout<<"Marks of Subject "<<(i+1)<<" : "<<sub[i]<<"\n";
            }
        }
        int getSum()
        {
            return (sub[0]+sub[1]+sub[2]+sub[3]+sub[4]+sub[5]);
        }
};
class StudentResult:public StudentExam
{
    private:
        float prcnt;
    public:
        void inputData()
        {
            inputSE();
            cout<<"\n--------------------------------------------\n";
        }
        void displayData()
        {
            displaySE();
            prcnt=getSum()/6.0;
            cout<<"Total Percentage Attained : "<<prcnt<<"\n";
            cout<<"\n--------------------------------------------\n";
        }
};
int main()
{
    int n;
    cout<<"Enter No. of Student You Want : ";
    cin>>n;
    StudentResult SR[n];
    for(int i=0;i<n;i++)
        SR[i].inputData();
    for(int i=0;i<n;i++)
        SR[i].displayData();
    return 0;
}