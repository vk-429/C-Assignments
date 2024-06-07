#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("c:/File/a.txt",ios::app);
    if(fout)
    {
        cout<<"Enter the data(Enter -1 if You Have Entered All The Data): ";
        while(fout)
        {
            getline(cin,line);
            if(line=="-1")
                break;
            fout<<line<<"\n";
        }
    }
    else
        cout<<"File not created or not able to open the file\n";
    fout.close();
    return 0;
}