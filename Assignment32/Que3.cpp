#include<iostream>
using namespace std;

class Animals
{
    public:
        virtual void sound()
        {
            cout<<"Different Animals have different sounds\n";
        }
};
class Dogs:public Animals
{
    public:
        void sound()
        {
            cout<<"Dogs bark\n";
        }
};

int main()
{
    Animals *a;
    Animals A;
    Dogs D;
    a=&D;
    a->sound();
    a=&A;
    a->sound();
    return 0;
}