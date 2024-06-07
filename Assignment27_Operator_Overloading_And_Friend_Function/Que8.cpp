#include<iostream>
using namespace std;
class Matrix
{
    private:
        int  a[3][3];
    public:
        void inputData();
        void showData();
        Matrix operator-();
};
void Matrix::inputData()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    cout<<"\n";
}
void Matrix::showData()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<"  ";
        cout<<"\n";
    }
}
Matrix Matrix::operator-()
{
    Matrix temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp.a[i][j]=-a[i][j];
        }
    }
    return temp;
}
int main()
{
    Matrix M1;
    cout<<"Enter Matrix Elements (3 x 3) : \n\n";
    M1.inputData();
    cout<<"Matrix is : \n\n";
    M1.showData();
    cout<<"\n";
    M1=-M1;
    cout<<"Matrix After Negating : \n\n";
    M1.showData();
    return 0;
}