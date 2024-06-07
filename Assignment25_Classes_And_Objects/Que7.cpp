#include<iostream>
using namespace std;
class Greatest
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
    Greatest G1,G2;
    G1.setNumbers(5,7,12);
    G2.setNumbers(76,34,58);
    G1.CalcLargest();
    G2.CalcLargest();
    cout<<"Largest of "<<G1.getA()<<" "<<G1.getB()<<" and "<<G1.getC()<<" is "<<G1.getLargest()<<endl;
    cout<<"Largest of "<<G2.getA()<<" "<<G2.getB()<<" and "<<G2.getC()<<" is "<<G2.getLargest()<<endl;
    return 0;
}