#include<iostream>
#include<forward_list>
using namespace std;


int main()
{
    forward_list<int> fl;
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        fl.push_front(i);
    }
    for(int x:fl)sum+=x;
    cout<<sum;
    cout<<'\n';
    return 0;
}