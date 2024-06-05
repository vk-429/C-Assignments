#include<iostream>
#include<unordered_map>
#include<iterator>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["Prateek"] = 100;
    m["Jatin"] = 100;
    m["Fayaj"] = 100;
    // m["Fayaj"] = 200;    
    unordered_map<int,int> m1;
    m1[1]=100;
    m1[2]=400;
    m1[8]=2000;
    m1[3]=1100;
    m1[5]=2500;
    unordered_map<int,int>::iterator y;
    for(y=m1.begin();y!=m1.end();y++)
    {
        cout<<y->first<<" "<<y->second<<"\n";
    }

    unordered_map<string,int>::iterator x;
    for(x=m.begin();x!=m.end();x++)
        cout<<"Key = "<<x->first<<" , Value = "<<x->second<<"\n";
    return 0;
}