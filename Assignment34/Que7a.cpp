#include<iostream>
#include<fstream>
#include<cstring>
#include <limits>
using namespace std;

class Item
{
    private:
        char item_code[6];
        char item_name[20];
        int price;
    public:
        friend void Read(Item[]);
        void Print()
        {
            cout<<item_code<<"\n";
            cout<<item_name<<"\n";
            cout<<price<<"\n";
            cout<<"\n";
        }
};
void Read(Item I[])
{
    ifstream fin;
        fin.open("c:/File/Item.txt",ios::in);
    string line;
    int i=0;
    while(!(fin.eof())&&i<50)
    {
        getline(fin,line);
        strcpy(I[i].item_code,line.c_str());
        getline(fin,line);
        //cout<<I[i].item_code<<"\n";
        strcpy(I[i].item_name,line.c_str());
        //cout<<I[i].item_name<<"\n";
        getline(fin,line);
        I[i].price=stoi(line);
        //cout<<I[i].price<<"\n";
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        i++;
    }
    fin.close();
}
int main()
{
    Item I[50];
    int i;
    Read(I);
    for(i=0;i<50;i++)
        I[i].Print();
    return 0;
}