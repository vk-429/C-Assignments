#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream fin;
    string line;
    fin.open("c:/File/a.txt",ios::in);
    ofstream fout;
    fout.open("c:/File/new.txt",ios::out);
    char ch;
    if(fout&&fin)
    {
        while(fin.get(ch))
        {
            if(ch>='A'&&ch<='Z')
            {
                ch+=32;
                fout<<ch;
            }
            else if(ch>='a'&&ch<='z')
            {
                ch-=32;
                fout<<ch;
            }
            else
                fout<<ch;
            cout<<ch;
        }
    }
    else
        cout<<"Error opening the file\n";
    fin.close();
    fout.close();
    return 0;
}