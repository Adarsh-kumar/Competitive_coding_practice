#include<iostream>
#include<vector>
#include<string>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int value;
int level;
}node;

int minimum_operations(int x,int y)
{

//write a bfs from x to y
//it's like an inline graph travesal(traversing while building the graph)

set<int> visit;
 queue<node> q;

q.push({x,0});
node n;
while(!q.empty())
{
node a=q.front();
q.pop();
//mark a as visited 

visit.insert(a.value);

if(a.value==y)
return (a.level);

 if (a.value*2==y||a.value-1==y)
return (a.level+1);

//now push  the values inside the queue
if(visit.find(a.value*2)==visit.end())
{
n.value=a.value*2;
n.level=a.level+1;
q.push(n);
}

if(visit.find(a.value-1)==visit.end())
{
n.value=a.value-1;
n.level=a.level+1;
q.push(n);
}

}

}
// Driver code
int main()
{
    int x = 2, y = 7;
    cout << minimum_operations(x, y);
    return 0;
}

