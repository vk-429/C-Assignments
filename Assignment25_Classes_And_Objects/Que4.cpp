#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        int a,b,c;
        int largest;
    public:
        void setNumbers(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        int getC()
        {
            return c;
        }
        void CalcLargest()
        {
            if(a>b)
            {
                if(a>c)
                    largest=a;
                else
                    largest=c;
            }
            else
            {
                if(b>c)
                    largest=b;
                else
                    largest=c;
            }
        }
        int getLargest()
        {
            return largest;
        }
};
int main()
{
    LargestNumber L1,L2;
    L1.setNumbers(2,9,6);
    L2.setNumbers(10,13,17);
    L1.CalcLargest();
    L2.CalcLargest();
    cout<<"Largest of "<<L1.getA()<<" "<<L1.getB()<<" and "<<L1.getC()<<" is "<<L1.getLargest()<<endl;
    cout<<"Largest of "<<L2.getA()<<" "<<L2.getB()<<" and "<<L2.getC()<<" is "<<L2.getLargest()<<endl;
    return 0;
}