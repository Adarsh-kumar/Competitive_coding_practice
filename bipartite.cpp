#include<bits/stdc++.h>
#include <queue>
#define V 4
using namespace std;

bool isBipartite(int G[][V],int source)
{
queue<int> q;
bool visited[V];
int  parent[V];
bool colour[V];
q.push(source);
while(!q.empty())
{
int u=q.front();
q.pop();
for(int v=0;v<V;v++)
{
if(visited[v]==0&&G[u][v]==1)
{
parent[v]=u;
colour[v]=1-colour[parent[v]];
visited[v]=1;
q.push(v);
}
else if(visited[v]==1&&G[u][v]==1)
{
if(colour[v]==colour[u])
return 0;
}
}
}
return 1;
}





int main()
{
    int G[][V] = {{0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };
 
    cout<<isBipartite(G, 0)<<"  ";
    return 0;
}
