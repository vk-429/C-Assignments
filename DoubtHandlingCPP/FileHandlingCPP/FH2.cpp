#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("c:/File/abc.txt");
    if(!fout)
    {
        cout<<"File not created or not able to open the file"<<endl;
    }
    else
    {
        cout<<"Enter the data : ";
        while(fout)
        {
            //fout.seekp(10);
            getline(cin,line);
            if(line == "-1")
                break;
            fout<<line<<"\n";
        }
        //fout<<"welcome to ineuron\n";
        //fout<<"Hello vivek kumar\n";
        cout<<"File created successfully\n";
    }
    fout.close();
    ifstream fin;
    fin.open("c:/File/abc.txt");
    fin.seekg(3,ios_base::beg);
    while(getline(fin,line))//(!fin.eof())
    {
        //getline(fin,line);
        cout<<line;
        cout<<"\n";
    }
    fin.close();
    return 0;
}