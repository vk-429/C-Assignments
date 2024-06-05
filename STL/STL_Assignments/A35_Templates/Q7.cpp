#include <iostream>
using namespace std;

// Non-templated base class
class Base {
public:
    void display() {
        std::cout << "Inside Base class" << std::endl;
    }
};

// Templated derived class
template<typename T>
class Derived : public Base {
public:
    void show() {
        std::cout << "Inside Derived class" << std::endl;
    }
};

int main() {
    // Create an object of the derived class with type int
    Derived<int> obj_int;
    obj_int.display();  // Accessing base class function
    obj_int.show();     // Accessing derived class function

    // Create an object of the derived class with type double
    Derived<double> obj_double;
    obj_double.display();  // Accessing base class function
    obj_double.show();     // Accessing derived class function

    return 0;
}
