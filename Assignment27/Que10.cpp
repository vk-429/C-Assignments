#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        friend istream& operator>>(istream &,Matrix &);
        friend ostream& operator<<(ostream &,Matrix &);
        Matrix operator+(Matrix M);
};
Matrix Matrix::operator+(Matrix M)
{
    Matrix temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            temp.a[i][j]=a[i][j]+M.a[i][j];
    }
    return temp;
}
istream& operator>>(istream &mycin,Matrix &M)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            mycin>>M.a[i][j];
    }
    cout<<"\n"; 
    return mycin;
}
ostream& operator<<(ostream &mycout,Matrix &M)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(M.a[i][j]<=9)
                mycout<<M.a[i][j]<<"    ";
            else
                mycout<<M.a[i][j]<<"   ";
        }
        cout<<"\n";
    }
    return mycout;
}
int main()
{
    Matrix M1,M2,M3;
    cout<<"Enter 1st Matrix(3 x 3) : \n";
    cin>>M1;
    cout<<"Enter 2nd Matrix : \n";
    cin>>M2;
    cout<<"1st Matrix : \n\n";
    cout<<M1;
    cout<<"\n";
    cout<<"2nd Matrix : \n\n";
    cout<<M2;
    cout<<"\n";
    cout<<"Addition of Matrices : \n\n";
    M3=M1+M2;
    cout<<M3;
    return 0;
}