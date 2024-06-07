#include <iostream>
#include <string>
using namespace std;

class Person 
{
    private:
        string name;
        int age;

    public:
        Person(const string& n, int a) : name(n), age(a) 
        {
            cout << "Person parameterized constructor called." << endl;
        }

        Person(const Person& other) : name(other.name), age(other.age) 
        {
            cout << "Person copy constructor called." << endl;
        }

        void display() const 
        {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

class Student : public Person 
{
    private:
        string degree;

    public:
        Student(const string& n, int a, const string& d) : Person(n, a), degree(d) 
        {
            cout << "Student parameterized constructor called." << endl;
        }

        Student(const Student& other) : Person(other), degree(other.degree) 
        {
            cout << "Student copy constructor called." << endl;
        }

        void display() const 
        {
            Person::display();
            cout << "Degree: " << degree << endl;
        }
};

class GraduateStudent : public Student 
{
    public:
        GraduateStudent(const string& n, int a, const string& d) : Student(n, a, d)
        {
            cout << "GraduateStudent parameterized constructor called." <<endl;
        }

        GraduateStudent(const GraduateStudent& other) : Student(other) 
        {
            cout << "GraduateStudent copy constructor called." << endl;
        }

        void display() const 
        {
            Student::display();
        }
};

int main() 
{
    GraduateStudent gs1("Alice", 25, "Ph.D.");
    GraduateStudent gs2 = gs1; // Using copy constructor

    cout << "Original GraduateStudent:" << endl;
    gs1.display();
    
    cout << "Copied GraduateStudent:" << endl;
    gs2.display();

    return 0;
}
