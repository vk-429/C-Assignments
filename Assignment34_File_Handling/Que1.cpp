#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("c:/File/vivek.java");
    if(!fout)
        cout<<"File not created or unable to open the file\n";
    else
    {
        fout<<"THIS IS A JAVA FILE\n";
        cout<<"File created successfully\n";
    }
    fout.close();
    ifstream fin;
    fin.open("c:/File/vivek.txt");
    getline(fin,line);
    cout<<line;
    fin.close();
    return 0;
}