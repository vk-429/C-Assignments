#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter element : ";
    int ele;
    cin>>ele;
    int flag=0;
    for(auto& x:vec)if(x==ele){
        flag=1;
        break;
    };
    if(flag==1)cout<<"Element Found\n";
    else cout<<"Element Not Found\n";
    return 0;
}