#include<iostream>
#include<fstream>
#include<string>
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
            cout<<"record added successfully\n";
        }
      /*  void printAllStudent();
        void searchStudent(int id);
        void updateStudent(int id);
        void deleteStudent(int id);*/
};
int main()
{
    int choice;
    student s;
    int id;
    ifstream fin;
    fin.open("c:/File/id.txt");
    while(!fin.eof())
    {
        fin>>ID;
    }
    cout<<"ID = "<<ID<<endl;    
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
            /*case 2:
                s.printAllStudent();
                break;
            case 3:
                s.searchStudent(id);
                break;
            case 4:
                s.updateStudent(id);
                break;
            case 5:
                s.deleteStudent(id);
                break;*/
            case 6:
                exit(0);

        }
    }
    return 0;
}