#include<iostream>
using namespace std;

class proof
{
    protected:
        int a;
        int b;
        int c;
    public:
        proof(){a=0;b=0;c=0;}
        proof(int a,int b,int c):a(a),b(b),c(c)
        {}
};

class compute:public proof
{
    public:
        compute(int a,int b,int c):proof(a,b,c){}
        void check_right_angled_triangle()
        {
            if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
                cout<<"Given Sides form a Right Angled Triangle\n";
            else cout<<"Given Sides don't form a Right Angled Triangle\n";
        }

};
int main()
{
    int a,b,c;
    cout<<"Enter lengths of sides of the triagle : ";
    cin>>a>>b>>c;
    compute C(a,b,c);
    C.check_right_angled_triangle();
    return 0;
}