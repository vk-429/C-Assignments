#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter size of the Array : ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements of the Array : ";
    int i;
    for(i=0;i<n;i++)cin>>vec[i];
    
    for(auto& x:vec)cout<<x<<" ";
    cout<<'\n';
    return 0;
}