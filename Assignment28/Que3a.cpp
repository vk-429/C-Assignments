#include <iostream>
#include <stdexcept>
using namespace std;

class Array 
{
    private:
        int* data;
        size_t size;

    public:
        Array(size_t size) : size(size) 
        {
            data = new int[size];
        }

        ~Array() 
        {
            delete[] data;
        }

        int& operator[](size_t index) // Access to Array Elements
        {
            if (index >= size) 
                throw out_of_range("Array index out of bounds");
            return data[index];
        }

        const int& operator[](size_t index) const // Read Only Access to Array Elements
        {
            if (index >= size)
                throw out_of_range("Array index out of bounds");
            return data[index];
        }
};

int main() 
{
    Array arr(5);

    try 
    {
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;

        cout << "Array elements: ";
        for (size_t i = 0; i< 5; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;  
    } 
    catch (const out_of_range& ex) 
    {
        cout << "Exception caught: " << ex.what() << endl;
    }

    return 0;
}


// Here’s what happens step-by-step:

// operator[] Call:

// arr[0] invokes the operator[] function for the Array object arr.
// Since arr is a non-const object, the non-const version of operator[] is called.

// Index Check:

// Inside operator[], it checks if the index (0 in this case) is within bounds.
// If the index is out of bounds, it throws an out_of_range exception. Otherwise, it proceeds to the next step.

// Return Reference:

// operator[] returns a reference to the data[0] element.
// Specifically, return data[index]; returns a reference to data[0].

// Assignment:

// The assignment arr[0] = 1; now operates on the reference returned by operator[].
// This means data[0] is set to 1.


/*

** Understanding the std::out_of_range Class
The std::out_of_range class is part of the C++ Standard Library and inherits from std::logic_error, which in turn inherits from std::exception. The std::exception class provides the what function, which is overridden in std::logic_error to store and return a descriptive error message.

Here's a step-by-step breakdown:

- Exception Hierarchy:

namespace std {
    class exception {
    public:
        virtual const char* what() const noexcept;
    };

    class logic_error : public exception {
    public:
        explicit logic_error(const std::string& what_arg);
        virtual const char* what() const noexcept override;
    };

    class out_of_range : public logic_error {
    public:
        explicit out_of_range(const std::string& what_arg);
    };
}

*/


/*

** Constructor of std::out_of_range:

When you create an std::out_of_range object, you typically pass a string message to its constructor.
This constructor calls the constructor of its base class std::logic_error with the message.

explicit out_of_range(const std::string& what_arg) : logic_error(what_arg) {}

Constructor of std::logic_error:

The std::logic_error class stores the message string.
This message is later returned by the what function.

explicit logic_error(const std::string& what_arg) : _M_msg(what_arg) {}

virtual const char* what() const noexcept override {
    return _M_msg.c_str();
}
private:
    std::string _M_msg;
** How It Works in Practice:
   When you throw an std::out_of_range exception with a message, the following sequence of events occurs:

- Throwing the Exception:

You create an std::out_of_range object with a message:

throw std::out_of_range("Array index out of bounds");

- Calling the Constructor:

The std::out_of_range constructor is called with the message "Array index out of bounds".
This constructor, in turn, calls the std::logic_error constructor with the same message.

- Storing the Message:

The std::logic_error constructor initializes its member variable _M_msg with the provided message.

- Retrieving the Message:

When the what function is called on the caught exception object, it returns the stored message:

const char* what() const noexcept override {
    return _M_msg.c_str();
}



*/



/*

In C++, std::out_of_range is an exception class defined in the Standard Library within the <stdexcept> header. It is part of the exception hierarchy and is used to indicate that a function has been provided with an argument that is outside the allowable range. The what function is inherited from the base class std::exception and provides a description of the exception.

The std::out_of_range Class
Definition:
The std::out_of_range class is defined in the <stdexcept> header and is derived from std::logic_error, which in turn is derived from std::exception.

** Hierarchy:

std::exception
   └── std::logic_error
         └── std::out_of_range

- Constructor:
The std::out_of_range class typically provides the following constructor:

explicit out_of_range(const std::string& what_arg);
This constructor initializes the exception object with an explanatory string.

- Member Function:
what:
The what function is inherited from std::exception and is used to obtain a C-style character string that describes the exception.

virtual const char* what() const noexcept;
Returns a pointer to the explanatory string provided during construction.
Example of std::out_of_range and what Function:

#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::out_of_range("This is an out-of-range exception");
    } catch (const std::out_of_range& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}

*/
