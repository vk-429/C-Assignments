#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("c:/File/abc.txt",ios::app);//, | ios::in | ios::out/*(mode of operation)*/);
    if(!fout)
    {
        cout<<"File not created or Not able to open the file\n";
    }
    else
    {
        //cout<<"Enter the data";
       // while(fout)
        //{
           //getline(cin,line);
            //if(line == "-1")
               // break;
            fout<<"Hello Prateek Jain\n"<<line;
       // }
        cout<<"File created Successfully\n";
    }
    fout.close();
    /*
    ifstream fin;
    fin.open("c:/File/abc.txt");
    while(fin.eof())
    {
        getline(fin,line);
        cout<<"\n"<<line;
    }
    fin.close();*/
    return 0;
}