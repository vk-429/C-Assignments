#include<iostream>
#include<queue>
#include<iterator>
using namespace std;

int main()
{
    queue<int> q;
    //priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(10);
    q.push(6);
    q.push(6);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}