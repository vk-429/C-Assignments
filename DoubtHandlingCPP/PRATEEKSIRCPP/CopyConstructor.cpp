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
            age=a;
            rank=r;
        }
        Person(const Person &p)
        {
            age=p.age;
            rank=p.rank;
        }
        Person(){}
};
int main()
{
    Person p1(20,23);//parameterised constructor
    Person p2=p1;//copy constructor
    Person p3;
    cout<<"Prateek age "<<p1.getAge()<<" and Rank "<<p1.getRank()<<endl;
    cout<<"Second "<<p2.getAge()<<endl;
    return 0;
}