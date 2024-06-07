#include<iostream>
using namespace std;
class Marks
{
    private:
        int marks;
    public:
        Marks()
        {
            marks=0;
        }
        Marks(int m)
        {
            marks=m;
        }
        void printMarks()
        {
            cout<<"Marks = "<<marks<<endl;
        }
        Marks *operator->() // Return a Pointer of Marks which is storing the address of calling object
        {
            return this;
        }
};
int main()
{
    Marks M1(98);
    M1.printMarks();
    M1->printMarks(); // Now we can use arrow operator with the object also
    return 0;
}