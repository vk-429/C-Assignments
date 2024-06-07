#include<iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person():name("Unknown"),age(0)
        {
            cout<<"DC of Person\n";
        }
};

class Doctor: public Person
{
    private:
        string degree;
    public:
        Doctor():Person(),degree("Undeclared")
        {
            cout<<"DC of Doctor\n";
        }
};

int main()
{
    Doctor d1;
    return 0;
}