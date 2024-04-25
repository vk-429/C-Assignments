#include<iostream>
using namespace std;
void PascleTriangle(int);
int Comb(int,int);
int Fact(int);
int main()
{
    int n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    PascleTriangle(n);
}
void PascleTriangle(int lines)
{
    int i,j,k,nd=0,num,l;
    for(i=0;i<lines;i++)
    {
        k=0;
        for(j=0;j<=2*lines;j++)
        {
            if(j<(lines-i)||j>(lines+i))
                cout<<"     ";
            if(j>=(lines-i)&&(j<=(lines+i)))
            {
                if(lines%2==1)
                {
                if(i%2==0)
                {
                    if(j%2==0)
                        cout<<"     ";
                    else
                    {
                        cout<<"  "<<Comb(i,k)<<"  ";
                        k++;
                    }
                }
                if(i%2==1)
                {
                    if(j%2==1)
                        cout<<"     ";
                    else
                    {
                        cout<<"  "<<Comb(i,k)<<"  ";
                        k++;
                    }
                }
                }
                else
                {
                    if(i%2==0)
                    {
                        if(j%2==1)
                            cout<<"     ";
                        else
                        {
                            cout<<"  "<<Comb(i,k)<<"  ";
                            k++;
                        }
                    }
                    if(i%2==1)
                    {
                        if(j%2==0)
                            cout<<"     ";
                        else
                        {
                            cout<<"  "<<Comb(i,k)<<"  ";
                            k++;
                        }
                    }
                }
            }
        }
        cout<<endl<<endl;
    }
}
int Comb(int n,int r)
{
    return Fact(n)/(Fact(n-r)*Fact(r));
}
int Fact(int num)
{
    int fact=1,i;
    for(i=2;i<=num;i++)
        fact*=i;
    return fact;
}