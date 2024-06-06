#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("C:/File/vivek.java",ios::in);
    char ch;
    int count=0;
    if(fin)
    {
        fin.seekg(0,ios_base::beg);
        while(fin.get(ch))
        {
            cout<<ch;
            count++;
        } 
        cout<<"\n"<<count<<"\n";
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