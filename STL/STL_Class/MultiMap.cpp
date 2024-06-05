#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    multimap<int,int> m;
    map<multimap<int,int>,int> mp;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(7,70));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(5,100));
    //m[9]=100;//invalid, because index may not be unique here
    //m[9]=200;
    //m.erase(5);
    m.insert(pair<int,int>(5,200));
    multimap<int,int>::iterator x;
    for(x=m.begin();x!=m.end();x++)
        cout<<"Key : "<<x->first<<" , Value : "<<x->second<<"\n";
    // auto it = m.find(5);
    //mp.insert(pair<multimap<int,int>,int>(make_pair(1,2)),200);
    return 0;
}