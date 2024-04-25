#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
class Item
{
    private:
        string code;
        string name;
        int price;
    public:
        friend void getInput(Item[]);
        void Print();
        friend void Sort(Item[],int);
};
void Sort(Item I[],int n)
{
    int i,j;
    string temp,temp1;
    int t;
    for(i=0;i<n-1;i++)
    {
       
        for(j=i+1;i<n;i++)
        {
            if(I[i].price>I[j].price)
            {
                temp=I[i].code;
                I[i].code=I[j].code;
                I[j].code=temp;
                temp1=I[i].name;
                I[i].name=I[j].name;
                I[j].name=temp1;
                t=I[i].price;
                I[i].price=I[j].price;
                I[j].price=t;
            }
        }
    }
}
void getInput(Item I[])
{
    ifstream fin;
    fin.open("c:/File/Item.txt",ios::in);
    if(!fin)
        cout<<"Error Opening File\n";
    else
    {
        int i=0,j,r;
        while(!(fin.eof()))
        {
            j=i/3;
            r=i%3;
            string s;
            if(i%3==0&&(i!=0))
                fin.ignore();
            getline(fin,s);
            //cout<<s<<"\n";
            if(r==0)
                I[j].code=s;
            if(r==1)
                I[j].name=s;
            if(r==2)
                I[j].price=(stoi(s));
            
            i++;
        }
        fin.close();
    }
}
void Item::Print()
{
    ofstream fout;
    fout.open("c:/File/c.txt",ios::out);
    fout<<code;
    fout<<name;
    fout<<price;
    fout.close();
     
}
int main()
{
    Item I[50];
    getInput(I);
    int i;
    Sort(I,50);
    for(i=0;i<50;i++)
        I[i].Print();
    return 0;
}