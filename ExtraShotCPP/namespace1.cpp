#include<iostream>
using namespace std;

namespace myLibrary {
    class MyClass {
    public:
        void display(); // Declaration of the member function
    };
    
    void printMessage() {
        std::cout << "Hello from myLibrary!" << std::endl;
    }

    void MyClass::display() {
        std::cout << "Displaying MyClass!" << std::endl;
    }
}

int main()
{
    myLibrary::printMessage();
    myLibrary:: MyClass o1;
    o1.display();
    return 0;
}