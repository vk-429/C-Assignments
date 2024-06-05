#include<iostream>
using namespace std;
class Array
{
    private:
        int a[100];//we can do it dynamically, here to understand this only we are making this.
        const int size=100;
    public:
        Array()
        {

        }
        void setArray(int n,int index)
        {
            if(index>=size)
            {
                cout<<"Array Index out of Bound Exception"<<endl;
                exit(0);
            }
            a[index]=n;
        }
        void display(int index)
        {
            if(index>=size)
            {
                cout<<"Array Index out of Bound Exception"<<endl;
                exit(0);
            }
            cout<<a[index]<<endl;
        }
        int operator[](int index)
        {
            if(index>=size)
            {
                cout<<"Array Index out of Bound Exception"<<endl;
                exit(0);
            }
            return a[index];
        }
};
int main()
{
    Array a,b;
    a.setArray(5,10);
    a.display(10);
    //b[20]=50;//Homework
    cout<<a[10]<<endl;
    cout<<a[150];
    return 0;
}


/*

** [] Operator

The [] operator is used for array or container element access. 
When you overload this operator, you are providing a way to access 
elements of an object as if it were an array.

Why it cannot be a non-member or friend function:

Direct Element Access: The [] operator is meant to provide direct 
access to elements within an object's internal structure, requiring 
knowledge of the object's state. This access is naturally handled 
within a member function context.

Instance-Specific Logic: The behavior of [] often depends on the 
specifics of the instance (e.g., bounds checking, internal data 
storage). A member function can directly access and manipulate the 
instance's data members.

Consistent Syntax: The syntax obj[index] is straightforward and 
intuitive when the operator is a member function. Making it a 
non-member would complicate this syntax and reduce readability.

*/