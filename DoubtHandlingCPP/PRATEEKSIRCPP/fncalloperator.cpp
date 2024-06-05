#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance(){}
        Distance(int f,int i)
        {
            feet=f;
            inches=i;
        }
        Distance operator()(int a,int b,int c)
        {
            //Distance d;
            feet=a+c+5;
            inches=a+b+15;
            return *this;
            //return d;
        }
        void display()
        {
            cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
        }
        //friend Distance operator()(Distance d,int a,int b,int c);
        // friend function is a non member function 
};
/*
Distance operator()(Distance d,int a,int b,int c)
{
    Distance d;
    d.feet=a+c+5;
    d.inches=a+b+15;
    return d;
}
*/
int main()
{
    Distance d1(5,10);
    Distance d2;
    d1.display();
    //d2=d1.operator()(10,20,30);
    d2=d1(10,20,30);
    d1.display();
    d2.display();
    return 0;
}


/*

** Here's why the function call operator must be a member function:

Instance Access: The function call operator () needs access to the 
instance of the class on which it is called. As a member function, 
it implicitly receives a this pointer, providing access to the 
instance's data members and other member functions. If it were a 
non-member or a friend, it would not have this implicit this pointer.

Syntax: The syntax of the function call operator implies that it is 
called on an object. For instance, obj() suggests that obj is an 
object of a class that defines the function call operator. 
Defining it as a member function aligns with this usage pattern.

** Why we can't make operator() friend

Conceptual Consistency

Inherent Behavior: The function call operator () conceptually represents 
the act of calling an instance of a class as if it were a function. 
This inherently ties the operator to the instance, meaning it should 
naturally be a member function.
Instance Association: When you write obj(), it directly implies that 
obj is an instance of a class with a callable behavior. This callable 
behavior must be associated directly with the object, which is 
achieved by defining operator() as a member function.

Technical Constraints

Syntax Requirements: C++ syntax for calling the function call operator 
requires it to be called on an instance (obj()), which directly implies 
a member function. Allowing it as a friend or non-member would complicate 
the syntax and semantics of the language.
No Non-Member Operator Lookup: For operators like +, -, <<, etc., 
C++ has rules to look up both member and non-member operator overloads. 
However, for the function call operator, C++ does not have a mechanism to 
look up non-member functions in the same way.

Consistent Design Paradigm

Member Function Binding: All operators that directly manipulate the 
state of an object in a unique way (like = for assignment, [] for 
subscripting, and () for function calls) are required to be member 
functions to ensure they have the appropriate context and access.
Implicit this Pointer: The function call operator needs the implicit 
this pointer to know which instance it is operating on. While friend 
functions have access to private and protected members, they don't 
have a this pointer inherently, which is necessary for the function 
call operator.

*/