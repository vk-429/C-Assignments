#include<iostream>
using namespace std;

// Global vs static global variable

// Visibility:

// Global Variable: Visible throughout the entire program (across all files) if declared with extern in other files.
// Static Global Variable: Visible only within the file it is declared in.

// Linkage:

// Global Variable: Has external linkage by default.
// Static Global Variable: Has internal linkage, preventing it from being referenced outside the file.

// Usage:

// Use a global variable without static if you need to share it across multiple files.
// Use a static global variable to restrict its visibility to the file where it's declared, ensuring no other part of the program can access or modify it directly.
// In conclusion, while both static and non-static global variables exist for the duration of the program, the static keyword modifies the variable's linkage and scope, making it private to the file it is declared in.


int A;//global variabe
class Complex
{
    private:
        int a,b;//instance member variable
    public:
        void setData(int x,int y)//instance member function
        {
            a=x;//local variable
            b=y;
        }
        void showData();
};
void Complex::showData()
{
    cout<<"real = "<<a<<" img = "<<b<<endl;
}
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.showData();
    c2.showData();
    return 0;
} 

