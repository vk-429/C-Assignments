#include<iostream>
using namespace std;
class Integer
{
    private:
        int n;
    public:
        Integer()
        {
            n=0;
        }
        Integer(int num)
        {
            n=num;
        }
        int operator!()
        {
            return !n;
        }
        friend istream& operator>>(istream &,Integer &);
        friend ostream& operator<<(ostream &,Integer &);
};
istream& operator>>(istream &mycin,Integer &I)
{
    cin>>I.n;
    cout<<"\n";
    return mycin;
}
ostream& operator<<(ostream &mycout,Integer &I)
{
    mycout<<"\n"<<I.n;
    return mycout;
}
int main()
{
    Integer I1,I2;
    cout<<"Enter 1st integer : ";
    cin>>I1;
    cout<<"Enter 2nd integer : ";
    cin>>I2;
    cout<<!I1<<"\n";
    cout<<!I2<<"\n";
    return 0;
}
