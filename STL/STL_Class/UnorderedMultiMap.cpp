#include<iostream>
#include<unordered_map>
#include<iterator>
using namespace std;

int main()
{
    unordered_multimap<string,int> m({
        {"Prateek",100},
        {"Jatin",200},
        {"Fayaj",300},
        {"Fayaj",400}
    });
    // m["Prateek"] = 100;
    // m["Jatin"] = 100;
    // m["Fayaj"] = 100;
    // m["Fayaj"] = 200;
    unordered_multimap<string,int>::iterator x;
    for(x=m.begin();x!=m.end();x++)
        cout<<"Key = "<<x->first<<" , Value = "<<x->second<<"\n";
    return 0;
}