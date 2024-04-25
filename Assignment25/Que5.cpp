#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
        int n;
        int reverse;
    public:
        void setN(int x)
        {
            n=x;
        }
        int getN()
        {
            return n;
        }
        void Reverse()
        {
            int num;
            num=n;
            reverse=0;
            while(num)
            {
                reverse=(reverse*10+(num%10));
                num/=10;
            }
        }
        int getReverse()
        {
            return reverse;
        }
};
int main()
{
    ReverseNumber R1,R2;
    R1.setN(345);
    R2.setN(792);
    R1.Reverse();
    R2.Reverse();
    cout<<"Reverse of "<<R1.getN()<<" is "<<R1.getReverse()<<endl;
    cout<<"Reverse of "<<R2.getN()<<" is "<<R2.getReverse()<<endl;
    return 0;
}