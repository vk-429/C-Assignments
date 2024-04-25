#include<iostream>
using namespace std;

class Player
{
    private:
        int playerno;
        string name;
        int num_of_match;
        int *num_of_goal;
    public:
        Player(int pn,const string &n,int nom):playerno(pn),name(n),num_of_match(nom)
        {
            num_of_goal = new int[nom];
            for(int i=0;i<nom;i++)
            {
                cout<<"Enter no of goals in match "<<(i+1)<<" : ";
                cin>> num_of_goal[i];
            }
        }
        void display()
        {
            cout<<"Paler Number : "<<playerno<<"\n";
            cout<<"Player Name  : "<<name<<"\n";
            cout<<"Number of Matches : "<<num_of_match<<"\n";
            for(int i=0;i<num_of_match;i++)
            {
                cout<<"Number of goals in match "<<(i+1)<<" : ";
                cout<<num_of_goal[i]<<"\n";
            }
        }
        ~Player()
        {
            delete[] num_of_goal;
        }
};

int main()
{
    Player P1(1,"MAHESH",4);
    cout<<"\n\n*************Player Information**************\n\n";
    P1.display();
    return 0;
}
/*
I have done it according to my capability 
now let's see the doubt class then things will become more clear
*/