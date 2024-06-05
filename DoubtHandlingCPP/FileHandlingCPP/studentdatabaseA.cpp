#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
int ID;
class student
{
    private:
        int id;
        string name;
        int age;
        string stream;
    public:
        void addStudent()
        {       
            ID++;
            cout<<"\nStudent ID = "<<ID<<'\n';  
            cout<<"Enter Student Details :-\n";   
            cout<<"Enter name : ";
            //fflush(stdin);
            cin.get();
            getline(cin,name);
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter stream : ";
            cin.get();
            getline(cin,stream);
            ofstream fout;
            fout.open("c:/File/student.txt",ios::app);
            fout<<ID<<"\n";
            fout<<name<<"\n";
            fout<<age<<"\n";
            fout<<stream<<"\n\n";
            fout.close();
            fout.open("c:/File/id.txt",ios::app);
            fout<<ID<<"\n";
            fout.close();
            cout<<"\nrecord added successfully!\n\n";
        }
        void printAllStudent()
        {
            ifstream fin;
            student s;
            fin.open("c:/File/student.txt");
            while(fin>>s.id)//(fin.eof())
            {
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin.ignore();
                getline(fin,s.stream);
                s.print();
            }
            fin.close();
        }
        void print()
        {
            cout<<"ID = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Stream = "<<stream<<endl<<endl;
            cout<<"###############################################"<<endl<<endl;
        }
        void searchStudent(int id)
        {
            ifstream fin;
            fin.open("c:/File/student.txt");
            student s;
            int flag=0;
            while(fin>>s.id)
            {
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin.ignore();
                getline(fin,s.stream);
                if(s.id==id)
                {
                    cout<<"\nStudent Details are as Follows :-\n\n";
                    cout<<"###############################################\n\n";
                    s.print();
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"\nRecord not found!!!\n\n";
        }
        void updateStudent(int id)
        {
            bool isdeleted;
            isdeleted=deleteStudent(id);
            if(isdeleted==false)
            {
                cout<<"\nRecord Not Found!!!\n";
                return;
            }
            ifstream fin;
            fin.open("c:/File/student.txt");
            ofstream fout;
            fout.open("c:/File/temp.txt",ios::app);
            student s;

            cout<<"\nEnter new details :-\n";
            cout<<"Enter name : ";
            //fflush(stdin);
            cin.get();
            getline(cin,name);
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter stream : ";
            cin.get();
            getline(cin,stream);
            //ID=(this->id);
            while(fin>>s.id)
            {
                if(s.id>id) break;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin.ignore();
                getline(fin,s.stream);
                fout<<s.id<<"\n";
                fout<<s.name<<"\n";
                fout<<s.age<<"\n";
                fout<<s.stream<<"\n\n";
            }
            
            fout<<id<<"\n";
            fout<<name<<"\n";
            fout<<age<<"\n";
            fout<<stream<<"\n\n";

            do
            {
                fout<<s.id<<"\n";
                fout<<s.name<<"\n";
                fout<<s.age<<"\n";
                fout<<s.stream<<"\n\n";
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin.ignore();
                getline(fin,s.stream);
            } while (fin>>s.id);

            fin.close();
            fout.close();
            remove("c:/File/student.txt");
            rename("c:/File/temp.txt","c:/File/student.txt");
            cout<<"\nRecord Updated Successfully!\n\n";
        }
        int deleteStudent(int id)
        {
            ifstream fin;
            fin.open("c:/File/student.txt");
            ofstream fout;
            fout.open("c:/File/temp.txt",ios::app);
            student s;
            int flag=0;
            while(fin>>s.id)
            {
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin.ignore();
                getline(fin,s.stream);
                if(s.id!=id)
                {
                    fout<<s.id<<"\n";
                    fout<<s.name<<"\n";
                    fout<<s.age<<"\n";
                    fout<<s.stream<<"\n\n";
                }
                if(s.id==id){flag=1;}
            }
            fin.close();
            fout.close();
            remove("c:/File/student.txt");
            rename("c:/File/temp.txt","c:/File/student.txt");
            return flag;
        }
};
int main()
{
    int choice;
    student s;
    int id;
    ifstream fin;
    fin.open("c:/File/id.txt");
    if(!fin)
        cout<<"File not found\n";
    else
    {
        while(!fin.eof())
        {
            fin>>ID;
        }  
    }
    fin.close();
    
    // jese hi hmara program start ho rha hai hm id wali file me se id read krke ID me
    // last wali id store kr de rhe hain or jb bhi hm add kr rhe hain to ID ko ++ kr rhe hain
    // jisse hmara databse maintain ho rha hai
    
    while(true)
    {
        cout<<"\n                  # MENU #                    \n";
        cout<<"###############################################\n";
        cout<<"\n1. Add Student"<<endl;
        cout<<"2. Print All The Student"<<endl;
        cout<<"3. Search a Student"<<endl;
        cout<<"4. Update a Student"<<endl;
        cout<<"5. Delete a Student"<<endl;
        cout<<"6. Exit"<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.addStudent();
                break;
            case 2:
                if(ID==0)
                    cout<<"\nNo Student is Added in the Record Till Yet!!!\n";
                else
                {
                    cout<<"\nThe List of Students in the Record is as Follows :-\n\n";
                    cout<<"###############################################\n\n";
                    s.printAllStudent();
                }
                break;
            case 3:
                cout<<"Enter Student ID : ";
                cin>>id;
                s.searchStudent(id);
                break;
            case 4:
                cout<<"Enter the id you want to update : ";
                cin>>id;
                s.updateStudent(id);
                break;
            case 5:
                cout<<"Enter student id you want to delete : ";
                cin>>id;
                bool isdeleted;
                isdeleted=s.deleteStudent(id);
                if(isdeleted==true)
                    cout<<"\nRecord deleted successfully!\n\n";
                else cout<<"\nRecord Not Found!!!\n\n";
                break;
            case 6:
                exit(0);
            default:
                cout<<"\nInvalid Choice!!!\n\n";
        }
    }
    return 0;
}