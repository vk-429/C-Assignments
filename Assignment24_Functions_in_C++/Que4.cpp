#include<iostream>
using namespace std;
void PascleTriangle(int);
long long int Comb(int,int);
long long int Fact(int);

void PrintNum(long long int num)
{
    if(num>=1&&num<=9)
    cout<<"   "<<num<<"   ";
    else if(num>=10&&num<=99)
    cout<<"  "<<num<<"   ";
    else if(num>=100&&num<=999)
    cout<<"  "<<num<<"  ";
    else if(num>=1000&&num<=9999)
    cout<<" "<<num<<"  ";
    else if(num>=10000&&num<=99999)
    cout<<" "<<num<<" ";
    else if(num>=100000&&num<=999999)
    cout<<num<<" ";
    else cout<<num;
}

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
        for(j=1;j<=2*lines-1;j++)
        {
            if(j<(lines-i)||j>(lines+i))
                cout<<"       ";
            else
            {
                if(((lines%2==1)and(((i^j)&1)== 0)) or ((lines%2==0)and(((i^j)&1)== 1)))
                    cout<<"       ";
                else
                {
                    PrintNum(Comb(i,k));
                        k++;
                }
            }
        }
        cout<<endl<<endl;
    }
}
long long int Comb(int n,int r)
{
    return Fact(n)/(Fact(n-r)*Fact(r));
}
long long int Fact(int num)
{
    long long int fact=1;
    for(int i=2;i<=num;i++)
        fact*=i;
    return fact;
} 

//Finally I Have Done it!!!