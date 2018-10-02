#include<iostream>
#include<vector>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int id;
node(int a):id(a)
{
}
}node;

typedef struct edge
{
int source;
int dest;
}edge;

class Graph
{
int vertices;
list<node> *adj;
public:
Graph(int V);
void add_edge(int source,int dest);
vector<int> bfs_distance(int source ,int dest);
    vector<int> bfs_parent(int source,int dest);
    bool edge_checker(int s,int d);
};

Graph::Graph(int v)
{
this->vertices=v;
this->adj=new list<node> [v];
}

void Graph::add_edge(int source,int dest)
{
this->adj[source].push_back({dest});
  this->adj[dest].push_back({source});  
}
bool Graph::edge_checker(int s,int d)
{
    list<node>::iterator itr;
    
    for(itr=(this->adj)[s].begin();itr!=(this->adj)[s].end();itr++)
    {
        if((*itr).id==d)
            return  1;
    }
    return 0;
}
vector<int> Graph::bfs_parent(int source,int dest)
{
queue<int> q;
int no_of_vertices=this->vertices;
std::vector<int> parent(no_of_vertices);
int visited[no_of_vertices];
for(int i=0;i<no_of_vertices;i++)
{
parent[i]=i;
    visited[i]=0;
}

std::vector<int > distance(no_of_vertices);

distance[source]=0;
    

q.push(source);
    visited[source]=1;
while(!q.empty())
{
int u=q.front();
    q.pop();
list<node>::iterator itr;
    
for(itr=this->adj[u].begin();itr!=adj[u].end();itr++)
{
int v=(*itr).id;
    if(visited[v]==0)
    {
q.push(v);
visited[v]=1;
parent[v]=u;
distance[v]=1+distance[u];
    }

}

}

return parent;
}

vector<int> Graph::bfs_distance(int source,int dest)
{
queue<int> q;
int no_of_vertices=this->vertices;
std::vector<int> parent(no_of_vertices);
int visited[no_of_vertices];
for(int i=0;i<no_of_vertices;i++)
{
parent[i]=i;
    visited[i]=0;
}

std::vector<int > distance(no_of_vertices);

distance[source]=0;
    

q.push(source);
    visited[source]=1;
while(!q.empty())
{
int u=q.front();
    q.pop();
list<node>::iterator itr;
    
for(itr=this->adj[u].begin();itr!=adj[u].end();itr++)
{
int v=(*itr).id;
    if(visited[v]==0)
    {
q.push(v);
visited[v]=1;
parent[v]=u;
distance[v]=1+distance[u];
    }

}

}

return distance;
}

int main()
{
int n,m,s,t;
int source,dest;
vector<int>  ans;
    vector<int> ans2;
    vector<int> parent;
while(scanf("%d%d%d%d",&n,&m,&s,&t)!=EOF)
{
Graph g(n);
for(int i=0;i<m;i++)
{
cin>>source>>dest;
g.add_edge(source-1,dest-1);
}
    cout<<"graph build"<<endl;
ans=g.bfs_distance(s-1,t-1);
    
    ans2=g.bfs_distance(t-1,s-1);
    //cout<<ans.size();
    parent=g.bfs_parent(s-1,t-1);
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
    cout<<endl;
    for(int i=0;i<ans2.size();i++)
cout<<ans2[i]<<" ";
    cout<<endl;
       for(int i=0;i<ans2.size();i++)
cout<<parent[i]<<" ";    
    int d=ans[t-1];
    int count=0;
    
//now for all pair uv check if minimum distance reamined same 
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            //we have also to check if the same edge is not being added 
            if(ans[i]+ans2[j]+1>d&&ans[j]+ans2[i]+1>d)
            {
                if(!g.edge_checker(i,j))
                count++;
            
        }
    }
    
    
    }
    cout<<endl<<count;
}
return 0;
}










