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

void* operator new(size_t size) 
{
    std::cout << "Custom new operator called. Size: " << size << " bytes." << std::endl;
    void* ptr = ::new char[size];
    return ptr;
}
// void operator delete(void* ptr) noexcept 
// {
//     std::cout << "Custom delete operator called." << std::endl;
//     ::delete[] static_cast<char*>(ptr);
// }
void operator delete(void* ptr) noexcept 
{
    std::cout << "Custom delete operator called." << std::endl;
    ::delete[] static_cast<char*>(ptr);  // Using global delete operator to deallocate memory
}

int main() 
{
    Student* student = new Student();
    
    student->inputData();
    student->showData();
    operator delete(student) ;
    return 0;
}
