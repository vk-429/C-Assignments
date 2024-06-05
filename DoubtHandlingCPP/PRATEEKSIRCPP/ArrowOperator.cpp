#include<iostream>
using namespace std;
class Shape
{
    private:
        float area;
    public:
        void setArea(float a)
        {
            area = a;
        }
        void display()
        {
            cout<<"Area = "<<area<<endl;
        }

};
class Circle
{
    Shape s;//common properties
    float radius;//unique properties
    public:
        void setRadius(float r)
        {
            radius=r;
        }
        void findArea()
        {
            s.setArea(3.14*radius*radius);
        }
        Shape *operator->()
        {
            return &s;
        }
};
class Rectangle
{
    Shape S;
    int L,B;
    public:
        void setLB(int l,int b)
        {
            L=l;
            B=b;
        }
        void findArea()
        {
            S.setArea(L*B);
        }
        Shape* operator->()
        {
            return &S;
        }
};
int main()
{
    Circle C;
    C.setRadius(5);
    C.findArea();
    C->display();
    Rectangle R;
    R.setLB(4,5);
    R.findArea();
    R->display();
    return 0;
}

/*

** -> Operator

The -> operator is used to access members of an object through a 
pointer. When you overload the -> operator, you are providing a 
way to access an object's members through a pointer-like syntax. 
This behavior is tightly coupled with the object's state and requires 
direct access to the instance.

Why it cannot be a non-member or friend function:

Context of the Instance: The -> operator needs to return a pointer 
to an instance's member or another object, which requires knowledge 
of the instance. As a member function, it implicitly has access to 
the instance through the this pointer.

Syntax and Semantics: The syntax obj->member suggests that obj is 
directly responsible for providing access to member. Implementing 
this as a non-member would break this natural syntax.

Chaining: Overloading -> allows for chaining, where multiple -> operators 
can be used in sequence. This chaining relies on each intermediate 
-> returning a valid pointer-like object.

*/