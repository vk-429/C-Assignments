#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("c:/File/abc.txt"); // By default write mode
    if(!fout)
    {
        cout<<"File not created or not able to open the file"<<endl;
    }
    else
    {
        cout<<"Enter the data : ";
        while(fout)
        {
            fout.seekp(10);
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
    fin.open("c:/File/abc.txt"); // By default read mode
    fin.seekg(10);// overload 1 : will put the pointer at specified loacation
    fin.seekg(3,ios::cur); // Overload 2 : will put the pointer specified no. of position 
    // away from the specified direction
    fin.seekg(-10,ios::end);
    fin.seekg(3,ios::beg); // last one will be applicable
    while(getline(fin,line))//(!fin.eof())
    {
        //getline(fin,line);
        cout<<line;
        cout<<"\n";
    }
    fin.close();
    return 0;
}

// similar to seekg() function we can use seekp(), to set the
// position of file output streams put pointer at desired location