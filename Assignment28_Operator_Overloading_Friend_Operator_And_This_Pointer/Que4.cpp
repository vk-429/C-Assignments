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
        static void* operator new(size_t size) 
        {
            cout << "Custom new operator called. Size: " << size << " bytes." << endl;
            void* ptr = ::new Student();  // Using global new operator to allocate memory
            return ptr;
        }

        /*
            In C++, a void* (void pointer) is a special type of pointer that 
            can hold the address of any data type. This feature makes void* pointers 
            very versatile for generic programming and memory management tasks.

            Why Not Directly Use Student*?
            
            If you define operator delete to take a Student* instead of void*, 
            it will not match the standard signature expected by the compiler 
            and the C++ runtime system. This mismatch can lead to undefined behavior 
            or compilation errors because the compiler expects a uniform way to call 
            operator delete.

            Type Casting in operator delete:

            By receiving a void* and casting it back to the appropriate type 
            (Student* in this case), you ensure that the memory is correctly 
            interpreted and deallocated.

            The standard signature of operator delete looks like this:
            void operator delete(void* ptr) noexcept;

        */
        static void operator delete(void* ptr) noexcept
        {
            cout << "Custom delete operator called." << endl;
            ::delete static_cast<Student*>(ptr);//(Student*)(ptr);//static_cast<char*>(ptr);  // Using global delete operator to deallocate memory
            cout<<"work has been done\n";
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
