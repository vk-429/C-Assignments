#include<iostream>
using namespace std;
class Fraction
{
    private:
        long numerator;
        long denominator;
        long fractio;
    public:
        Fraction()
        {
            numerator=0;
            denominator=0;
        }
        void showData()
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
        Fraction operator++()
        {
            Fraction temp;
            temp.numerator=++numerator;
            temp.denominator=++denominator;
            return temp;
        }
        Fraction operator++(int)
        {
            Fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }
        friend istream& operator>>(istream &,Fraction &);
        friend ostream& operator<<(ostream &,Fraction &);      
};
istream& operator>>(istream &mycin,Fraction &f)
{
    cout<<"Numerator   :  ";
    mycin>>f.numerator;
    cout<<"Denomiator  :  ";   
    mycin>>f.denominator;
    return mycin;
}
ostream& operator<<(ostream &mycout,Fraction &f)
{
    cout<<f.numerator<<"/"<<f.denominator<<endl;
    return mycout;
}
int main()
{
    Fraction f1,f2;
    cout<<"f1   :  ";
    cout<<f1;
    cout<<"f2   :  ";
    cout<<f2;
    cout<<"\n";
    cout<<"Enter 1st Fraction Value \n";
    cin>>f1;
    f1++;
    cout<<"f1++  :  ";
    cout<<f1;
    ++f1;
    cout<<"++f1  :  ";
    cout<<f1;
    cout<<"\n";
    cout<<"Enter 2nd Fraction Value \n";
    cin>>f2;
    f2=++f1;
    cout<<"f2 = ++f1\n";
    cout<<"f1  :  ";
    cout<<f1;
    cout<<"f2  :  ";
    cout<<f2;
    cout<<"\n";
    f2=f1++;
    cout<<"f2 = f1++\n";
    cout<<"f1  :  ";
    cout<<f1;
    cout<<"f2  :  ";
    cout<<f2;
    return 0;
}
