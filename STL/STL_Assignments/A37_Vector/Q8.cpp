 #include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    vector<int> vec2{4,7,9,2,20,15,40,11};
    int i,j;
    unordered_set<int> st;
    for(auto&x:vec)
    {
        for(auto&y:vec2)
        {
            if(x==y)st.emplace(x);
        }
    }
    cout<<"Common Elements :-\n";
    for(auto&x:st)cout<<x<<" ";
    cout<<"\n";
    return 0;
}