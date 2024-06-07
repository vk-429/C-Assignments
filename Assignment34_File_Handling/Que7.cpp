#include<iostream>
#include<fstream>
#include<string>
#include <limits>
using namespace std;
class Item
{
    private:
        string code;
        string name;
        int price;
    public:
        friend void getInput(Item*);
        friend void OverWrite(Item*,int);
        friend void Sort(Item*,int);
};
void Sort(Item *I,int n)
{
    int i,j;
    Item temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(I[j].price>I[i].price)
            {
                temp=I[i];
                I[i]=I[j];
                I[j]=temp;
            }
        }
    }
}
void getInput(Item *I)
{
    ifstream fin;
    fin.open("c:/File/Item.txt",ios::in);
    if(!fin)
        cout<<"Error Opening File\n";
    else
    {
        int i=0;
        while(getline(fin,I[i].code))
        {
            getline(fin,I[i].name);
            fin>>I[i].price;
            fin.ignore(numeric_limits<streamsize>::max(), '\n');
            fin.ignore(numeric_limits<streamsize>::max(), '\n');
            i++;
        }
        fin.close();
    }
}
void OverWrite(Item *I,int n)
{
    ofstream fout("c:/File/Item.txt", ios::out | ios::trunc);
    if (!fout) 
        cout << "Error Opening File\n";
    else 
    {
        for (int i = 0; i < n; i++) 
        {
            fout << I[i].code << "\n";
            fout << I[i].name << "\n";
            fout << I[i].price << "\n\n";
        }
        fout.close();
    }  
}
int main()
{
    Item I[50];
    getInput(I);
    int i;
    Sort(I,50);
    OverWrite(I,50);
    return 0;
}