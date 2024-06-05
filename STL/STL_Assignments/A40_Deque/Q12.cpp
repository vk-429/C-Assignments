#include<iostream>
#include<deque>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int size=s.length();
    deque<char> d;
    int i;
    for(i=0;i<size;i++)
    {
        if(s[i]!='#')d.push_back(s[i]);
        else if(!d.empty())d.pop_back();
    }
    string ans;
    for(i=0;i<d.size();i++)
        ans+=d[i];
    cout<<"Output = "<<ans<<"\n";
}
