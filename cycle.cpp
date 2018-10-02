#include<iostream>
#include<vector>
#include<string>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

class graph
{
int vertices;
list<int> *adj;
public:
graph(int v);
void addEdge(int s,int t);
bool contains_cycle();
};

graph::graph(int v)
{
this->vertices=v;
this->adj=new list<int>[v];
}

void graph::addEdge(int s,int t)
{
this->adj[s].push_back(t);
this->adj[t].push_back(s);
}

bool graph::contains_cycle()
{
int no=this->vertices;
queue<int> q;
int parent[no];
bool visited[no];
for(int i=0;i<no;i++)
{
visited[i]=0;
parent[i]=i;
}
visited[0]=1;
q.push(0);
while(!q.empty())
{
int s=q.front();
q.pop();
cout<<s<<" ";
list<int>::iterator itr;
for(itr=(this->adj)[s].begin();itr!=(this->adj)[s].end();itr++)
{
int l=(*itr);
if(visited[l]==1&&l!=parent[s])
return 1;
else
{
if(visited[l]==0)
{
q.push(l);
parent[l]=s;
visited[l]=1;
}
}
}
}
return 0;
}



int main()
{
    graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 0);
    g1.addEdge(0, 4);
    g1.addEdge(1, 4);
    cout<<g1.contains_cycle()<<endl;
 
    graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
g2.addEdge(0,2);
    //g2.addEdge(0,2);
    cout<<g2.contains_cycle()<<endl;
    return 0;
}
