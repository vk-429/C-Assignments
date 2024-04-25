#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("c:/File/a.txt",ios::in);
    char ch;
    int c1=0,c2=0,c3=0;
    if(fin)
    {
        while(fin.get(ch))
        {
            c1++;
            if(ch==' ')c2++;
            if(ch==10)
            {
                c3++;
                c2++;
                c1--;
            }
        }
        cout<<"Characters = "<<c1<<"\nWords = "<<c2<<"\nLines = "<<c3<<"\n";
    }
    else
        cout<<"Error opening file\n";
    fin.close();
    return 0;
}