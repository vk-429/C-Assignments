#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("C:/File/student.txt",ios::in);
    char ch;
    char pch='\0';
    int count=0;
    if(fin)
    {
        fin.seekg(0,ios_base::beg);
        while(!fin.eof())
        {
            fin>>ch;
            if(pch!='\0')
            cout<<pch<<"\n";
            count++;
            pch=ch;
        } 
        cout<<count-1<<"\n";
    }
    else
        cout<<"File not created or not able to open the file\n";
    
    fin.close();
    return 0;
}
/*
if (prevCharacter != '\0') {
            std::cout << prevCharacter; // Print the previously read character
        }

        prevCharacter = character;
*/