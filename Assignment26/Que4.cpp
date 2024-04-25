#include<iostream>
using namespace std;
class Counter 
{
    private:
        int count;
    public:
        Counter()
        {
            count=0;
        }
        void function()
        {
            count++;
        }
        int getCounter()
        {
            return count;
        }
};
int main()
{
    Counter C1;
    C1.function();
    C1.function();
    C1.function();
    cout<<"Count = "<<C1.getCounter()<<endl;
    return 0;
}