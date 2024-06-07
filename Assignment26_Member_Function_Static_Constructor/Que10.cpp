#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int k;
    public:
        static void function()
        {
            k++;
        }
        static int getK()
        {
            return k;
        }
};
int StaticCount::k;
int main()
{
    StaticCount::function();
    StaticCount::function();
    StaticCount::function();
    cout<<"Result = "<<StaticCount::getK()<<endl;
    return 0;
}