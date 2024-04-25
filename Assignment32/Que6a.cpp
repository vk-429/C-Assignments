#include <iostream>
#include <string>
using namespace std;

class Person 
{
    private:
        string name;
        int age;

    public:
        Person() 
        {
            cout << "Person default constructor called." << endl;
            name = "Unknown";
            age = 0;
        }

        Person(const string& n, int a) : name(n), age(a) 
        {
            cout << "Person parameterized constructor called." << endl;
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
};

class GraduateStudent : public Student 
{
    public:
        GraduateStudent(const string& n, int a, const string& d) : Student(n, a, d) 
        {
            cout << "GraduateStudent parameterized constructor called." << endl;
        }
};

int main() 
{
    GraduateStudent gs("Alice", 25, "Ph.D.");
    return 0;
}
