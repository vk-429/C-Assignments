#include<iostream>
using namespace std;

class ABC
{
    private:
        int a;
        int b;
    public:
        ABC(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void display()
        {
            cout<<"a = "<<a<<" b = "<<b<<"\n";
        }
        friend void swap(ABC*,ABC*);
};
void swap(ABC *p,ABC *q)
{
    int t1;
    t1=p->a;
    p->a=q->a;
    q->a=t1;
    t1=p->b;
    p->b=q->b;
    q->b=t1;
}
int main()
{
    ABC O1(2,3),O2(4,5);
    cout<<"Before swapping :-\n";
    cout<<"Object 1\n";
    O1.display();
    cout<<"Object 2\n";
    O2.display();
    swap(&O1,&O2);
    cout<<"\n";
    cout<<"After swapping :-\n";
    cout<<"Object 1\n";
    O1.display();
    cout<<"Object 2\n";
    O2.display();
    return 0;
}