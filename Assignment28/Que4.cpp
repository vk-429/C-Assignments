#include <iostream>
using namespace std;
class Student 
{
    private:
        char name[20];
        int rollno;
        int age;
    public:
        Student(){}
        void* operator new(size_t size) 
        {
            std::cout << "Custom new operator called. Size: " << size << " bytes." << std::endl;
            void* ptr = ::new Student();  // Using global new operator to allocate memory
            return ptr;
        }

        void operator delete(void* ptr) noexcept
        {
            std::cout << "Custom delete operator called." << std::endl;
            ::delete static_cast<Student*>(ptr);//(Student*)(ptr);//static_cast<char*>(ptr);  // Using global delete operator to deallocate memory
            cout<<"work has done\n";
        }

        // Other member functions and data members...

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

int main() {
    Student* student = new Student;
    student->inputData();
    student->showData();
    delete student;

    return 0;
}
