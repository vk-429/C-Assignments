#include <iostream>
#include <fstream>
#include <cstring>
#include <limits>
#include<algorithm>
using namespace std;

class Item {
private:
    char item_code[7];
    char item_name[21];
    int price;
public:
    friend void Read(Item[]);
    friend bool CompareByPrice(const Item& a, const Item& b);
    friend void PrintSorted(Item[]);
};
void PrintSorted(Item I[])
{
    ofstream fout;
    fout.open("c:/File/Item1.txt",ios::out);
    int i;
    for(i=0;i<50;i++)
    {
        fout<<I[i].item_code<<"\n";
        fout<<I[i].item_name<<"\n";
        fout<<I[i].price<<"\n";
        fout<<"\n";
    }
    fout.close();
}
bool CompareByPrice(const Item& a, const Item& b) 
{
    return a.price > b.price;
}
// void Sort(Item I[])
// {
//     int i,j;
//     for(i=0;i<49;i++)
//     {
//         for(j=i+1;j<50;j++)
//         {
//             if(I[i].price<I[j].price)
//             {
//                 I[i].price=I[i].price+I[j].price;
//                 I[i].price=I[i].price-I[j].price;
//                 I[j].price=I[i].price-I[j].price;

//             }
//         }
//     }
// }
void Read(Item I[]) {
    ifstream fin;
    fin.open("c:/File/Item1.txt", ios::in);
    string line;
    int i = 0;
    while (!fin.eof() && i < 50) {
        getline(fin, line);

        // Extract item_code from the line
        strncpy(I[i].item_code, line.c_str(), 6);
        I[i].item_code[6] = '\0';

        getline(fin, line);

        // Extract item_name from the line
        strncpy(I[i].item_name, line.c_str(), 20);
        I[i].item_name[20] = '\0';

        getline(fin, line);

        // Extract price from the line
        I[i].price = stoi(line);

        fin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore the rest of the line

        i++;
    }
    fin.close();
}

int main() {
    Item I[50];
    int i;
    Read(I);
    sort(I, I + 50, CompareByPrice);
    PrintSorted(I);
    return 0;
}
