#include<iostream>
using namespace std;
class Square
{
    private:
        int n;
        int sqr;
        static int x;
    public:
        void setN(int x)
        {
            n=x;
        }
        int getN()
        {
            return n;
        }
        void CalculateSquare()
        {
            x++;
            sqr=n*n;
        }
        int getSquare()
        {
            return sqr;
        }
        static int getX()
        {
            return x;
        }
};
int Square::x;
int main()
{
    Square S1,S2;
    S1.setN(34);
    S2.setN(45);
    S1.CalculateSquare();
    S2.CalculateSquare();
    cout<<"Square of "<<S1.getN()<<" is "<<S1.getSquare()<<endl;
    cout<<"Square of "<<S2.getN()<<" is "<<S2.getSquare()<<endl;
    cout<<"Square function is called "<<Square::getX()<< " times";
    return 0;
}