#include<iostream>
using namespace std;

class BaseClass
{
    private:
        int m;
        int n;
    public:
        BaseClass()
        {
            cout<<"Base Class DC Called\n";
            m=0;n=0;
        }
        BaseClass(int x,int y)
        {
            m=x;n=y;
            cout<<"PC of BC Called\n";
        }
};

class MyClass
{
    private:
        int x;
        int y;
        BaseClass b1;
    public:
        MyClass():x(0),y(0),b1(2,3)
        {
            cout<<"DC Called\n";
            //BaseClass(2,3);
            //x=0;y=0;
        }
        MyClass(const MyClass& my):x(my.x),y(my.y),b1(4,5)
        {
            cout<<"CC Called\n";
            //BaseClass(4,5);
            //x=my.x;
            //y=my.y;
        }
        MyClass(int a,int b):x(a),y(b),b1(6,7)
        {
            cout<<"PC Called\n";
            //BaseClass(6,7);
            //x=a;
            //y=b;
        }
        void display()
        {
            cout<<"x = "<<x<<" "<<"y = "<<y<<"\n";
        }
};

int main()
{
    MyClass c1,c2(2,3),c3=c2;
    c2.display();
    return 0;
}


/*

with the help of initializer list we can make objects(without having Default Constructor), 
of some class and initialize it later on
class BaseClass have only Parameterised Constructor, but
we are able to write BaseClass b1; while in normal condition without DC we can't

*/


/*

** Performance Benefits:-

Fewer Function Calls: In the first version, the constructor body 
assigns values to a, b, and c after they have been default-initialized. 
This involves extra function calls for the default initialization 
and then assignments. In the second version, the initializer list 
directly initializes a, b, and c with the provided values, reducing 
the number of function calls.

Direct Initialization: The initializer list ensures that a, b, and c 
are directly initialized to the values x, y, and z, avoiding the 
intermediate default values. This is not only more efficient but 
also can be important for classes that do not have cheap default 
constructors or that manage resources (e.g., file handles, network 
connections).

Const and Reference Members: For member variables that are const or 
references, an initializer list is the only way to initialize them. 
These members must be initialized at the point of declaration and 
cannot be assigned values within the constructor body.

*/