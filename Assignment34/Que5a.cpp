#include<iostream>
#include<fstream>
//#include<string>
//#include<cstring>
using namespace std;

int main()
{
    ifstream fin1,fin2;
    ofstream fout;
    string line,file_name1,file_name2,file_name3;
    cout<<"\nEnter 1st file name with extension '.txt' : ";
    getline(cin,file_name1);
    cout<<"\nEnter 2nd file name with extension '.txt' : ";
    getline(cin,file_name2);
    cout<<"\nEnter 3rd file name with extension '.txt'";
    cout<<"\n(Which will store the contents of 1st & 2nd file) : ";
    getline(cin,file_name3);
    fin1.open(file_name1);
    fin2.open(file_name2);

    if((!fin1)||(!fin2))
    {
        cout<<"\nError opening file 1 or 2";
        exit(EXIT_FAILURE);
    }
    else
    {
        fout.open(file_name3);
        if(!fout)
        {
            cout<<"\nError opening file 3";
            exit(EXIT_FAILURE);
        }
        else
        {
            while(!fin1.eof())
            {
                getline(fin1,line);
                fout<<line<<"\n";
            }
             while(!fin2.eof())
            {
                getline(fin2,line);
                fout<<line<<"\n";
            }
        }
    }
    cout<<"Two files have been merged into "<<file_name3<<"\n";
    fin1.close();
    fin2.close();
    fout.close();
    return 0;

}