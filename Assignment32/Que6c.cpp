#include <iostream>
#include <string>
using namespace std;
class Person 
{
    private:
        string name;
        int age;

    public:
        Person() : name("Unknown"), age(0) 
        {
            cout << "Person default constructor called." << endl;
        }

        void display() const //const is used for read only operation
        {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

class Student : public Person 
{
    private:
        string degree;

    public:
        Student() : Person(),degree("Undeclared") 
        {
            cout << "Student default constructor called." << endl;
        }
        void display() const
        {
            Person::display();
            cout<< "Degree: " << degree << endl;
        }
};

class GraduateStudent : public Student 
{
    public:
        GraduateStudent() : Student()
        {
            cout << "GraduateStudent default constructor called." << endl;
        }
        void display() const
        {
            Student::display();
        }
};

int main() 
{
    GraduateStudent gs1; // Using default constructors

    cout << "GraduateStudent:" << endl;
    gs1.display();

    return 0;
}
