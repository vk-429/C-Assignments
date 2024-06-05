#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(7,70));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(5,100));
    m[9]=100;
    m[9]=200;
    m.erase(5);
    m.insert(pair<int,int>(5,100));
    map<int,int>::iterator x;
    for(x=m.begin();x!=m.end();x++)
        cout<<"Key : "<<x->first<<" , Value : "<<x->second<<"\n";
    for(int i=0;i<m.size();i++)cout<<m[i]<<" ";

    return 0;
}