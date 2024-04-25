#include<iostream>
using namespace std;
class Person
{
    private:
        int age;
        int rank;
    public:
        int getAge()
        {
            return age;
        }
        int getRank()
        {
            return rank;
        }
        Person(int a,int r)
        {
            cout<<"Parameter constructor called"<<endl;
            age=a;
            rank=r;
        }
        Person(const Person &p)
        {
            cout<<"Copy constructor called"<<endl;
            age=p.age;
            rank=p.rank;
        }
        Person()
        {
            cout<<"Default constructor called"<<endl;
        }
        Person operator+(Person p)
        {
            cout<<"Operator + called"<<endl;
            Person temp;
            temp.age=age+p.age;
            temp.rank=rank+p.rank;
            return temp;
        }
        Person operator++()//Pre increment
        {
            Person temp;
            cout<<"Operator ++ pre called\n";
            temp.rank=++rank;
            temp.age=++age;
            return temp;
        }
        Person operator++(int)//Post increment , int is dummy/useless
        {
            Person temp;
            cout<<"Operator ++ post called\n";
            temp.rank=rank++;
            temp.age=age++;
            return temp;
        }
        void display()
        {
            cout<<"Person age "<<age<<" and Rank "<<rank<<endl;
        }
        void operator=(Person P)
        {
            cout<<"Assignment operator called\n";
            rank=P.rank;
            age=P.age;
        }
};
int main()
{
    Person p1(20,23);//parameterised constructor
    Person p2=p1;//copy constructor
    Person p3=p1+p2;//Compiler is optimising the code
    //Person p4,p5=p3+p2;
    (++p3).display();
    (p3++).display();
    p3.display();
    Person p4=(++p3);//compiler is optimising the code that's why copy constructor is not called here
   // Person p5;
    //p5=p4;
    //cout<<"Jateen age "<<p5.getAge()<<endl;
    //p4 is passing internally like temp=p4
    cout<<"Prateek age "<<p1.getAge()<<" and Rank "<<p1.getRank()<<endl;
    cout<<"Jateen age "<<p2.getAge()<<endl;
    cout<<"Utkarsh age "<<p3.getAge()<<" and Rank "<<p3.getRank()<<endl;
    return 0;
}