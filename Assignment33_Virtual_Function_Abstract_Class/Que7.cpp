#include<iostream>
using namespace std;

class Matrix
{
    protected:
        int a,b,c,d;
    public:
        Matrix(int a,int b,int c,int d):a(a),b(b),c(c),d(d){}
        Matrix(){a=0;b=0;c=0;d=0;}
};

class calculate_determinant:public Matrix
{
    public:
        calculate_determinant():Matrix(){}
        calculate_determinant(int a,int b,int c,int d):Matrix(a,b,c,d){}
        int Calculate_Determinant()
        {
            return a*d-b*c;
        }
};
int main()
{
    calculate_determinant d1(1,4,2,10);
    int detereminant=d1.Calculate_Determinant();
    cout<<"Determinant of the Matrix is "<<detereminant<<"\n";
    return 0;
}