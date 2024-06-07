#include <iostream>
using namespace std;
class Student 
{
    // Member variables and functions...
    private:
        char name[20];
        int rollno;
        int age;
    public:
        Student(){}
        void inputData()
        {
            cout<<"Enter the name : ";
            cin.getline(name,20);
            cout<<"Enter roll no. : ";
            cin>>rollno;
            cout<<"Enter age : ";
            cin>>age;
            cin.ignore();
        }
        void showData()
        {
            cout<<"Name : "<<name<<"\nRoll No. : "<<rollno<<"\nAge : "<<age<<"\n";
        }
};

class Person
{
    private:
        string name;
        int age;
    public:
        Person(){name="";age=0;}
        Person(string name,int age):name(name),age(age){};
        void Display(){cout<<"Name = "<<name<<"\nAge = "<<age<<"\n\n";}
};

// These Operators will work to allocate memory for a variable of any data type

void* operator new(size_t size) 
{
    cout << "Custom new operator called. Size: " << size << " bytes." << endl;
    void* ptr = ::new char[size]; // We don't know the size of object that's why 
    //allocate memory using char array char variable, bcz its size is 1byte
    return ptr;
}

void operator delete(void* ptr) noexcept 
{
    cout << "Custom delete operator called." << endl;
    ::delete[] static_cast<char*>(ptr);  // Using global delete operator to deallocate memory
}

int main() 
{
    Student* student = new Student();
    int *p=new int[50]; // if we allocate memory for predefined data type it will use predefined new operator
    student->inputData();
    student->showData();
    operator delete(student) ;

    Person* person = new Person();
    operator delete (person);

    return 0;
}
