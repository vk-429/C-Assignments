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
            cout<<"Enter name : ";
            //fflush(stdin);
            cin.get();
            getline(cin,name);
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter stream : ";
            cin>>stream;
            ofstream fout;
            ID++;
            fout.open("c:/File/student.txt",ios::app);
            fout<<"\n"<<ID;
            fout<<"\n"<<name;
            fout<<"\n"<<age;
            fout<<"\n"<<stream;
            fout.close();
            fout.open("c:/File/id.txt",ios::app);
            fout<<"\n"<<ID;
            fout.close();
            cout<<"record added successfully\n\n";
        }
        void printAllStudent()
        {
            ifstream fin;
            student s;
            fin.open("c:/File/student.txt");
            int i=0;
            while(!fin.eof())//(fin.eof())
            {
                fin>>s.id;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin>>s.stream;
                s.print();i++;
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
            fin.open("c:/File/student.txt",ios::app);
            student s;
            int flag=0;
            while(!fin.eof())
            {
                fin>>s.id;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin>>s.stream;
                if(s.id==id)
                {
                    s.print();
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Record not found\n\n";
        }
        void updateStudent(int id)
        {
            deleteStudent(id);
            fstream fout;
            cout<<"\nEnter new details : \n";
            cout<<"Enter name : ";
            //fflush(stdin);
            cin.get();
            getline(cin,name);
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter stream : ";
            cin>>stream;
            //ID=(this->id);
            fout.open("c:/File/student.txt",ios::app);
            fout<<"\n"<<id;
            fout<<"\n"<<name;
            fout<<"\n"<<age;
            fout<<"\n"<<stream;
            fout.close();
            cout<<"record updated successfully\n\n";
        }
        void deleteStudent(int id)
        {
            ifstream fin;
            fin.open("c:/File/student.txt");
            ofstream fout;
            fout.open("c:/File/temp.txt",ios::app);
            student s;
            while(!fin.eof())
            {
                fin>>s.id;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin>>s.stream;
                if(s.id!=id)
                {
                    fout<<"\n"<<s.id;
                    fout<<"\n"<<s.name;
                    fout<<"\n"<<s.age;
                    fout<<"\n"<<s.stream;
                }
            }
            fin.close();
            fout.close();
            remove("c:/File/student.txt");
            rename("c:/File/temp.txt","c:/File/student.txt");
            cout<<"Record deleted successfully\n\n";
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
    /*
    jese hi hmara program start ho rha hai hm id wali file me se id read krke ID me
    last wali id store kr de rhe hain or jb bhi hm add kr rhe hain to ID ko ++ kr rhe hain
    jisse hmara databse maintain ho rha hai
    */
    //  cout<<"ID = "<<ID<<endl;    
    while(true)
    {
        cout<<"1. Add Student"<<endl;
        cout<<"2. Print all the Student"<<endl;
        cout<<"3. Search a Student"<<endl;
        cout<<"4. Update a Student"<<endl;
        cout<<"5. Delete a Student"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.addStudent();
                break;
            case 2:
                s.printAllStudent();
                break;
            case 3:
                cout<<"Enter student id : ";
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
                s.deleteStudent(id);
                break;
            case 6:
                exit(0);

        }
    }
    return 0;
}