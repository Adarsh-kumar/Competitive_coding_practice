#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class graph
{
int no_of_vertices;
vector<int> *adj;
public:
graph(int v);
void addEdge(int u,int v);
vector<vector<int> > dfs(int s);
void print_dfs(int u,bool visited[]);
void k_cores(int u,int k,bool visited[],vector<int> removed);
void print_all_k_cores(int k);
};

graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<int> [v];
}

void graph::addEdge(int u,int v)
{
this->adj[u].push_back(v);
this->adj[v].push_back(u);
}

void graph::k_cores(int u,int k,bool visited[],vector<int> removed)
{
int degree=adj[u].size();
/*for(int v=0;v<no_of_vertices;v++)
{
if(u!=v)
{
if(std::find(adj[v].begin(),adj[v].end(),u)!=adj[v].end())
degree--;
}
}*/

for(int i=0;i<removed.size();i++)
{
if(std::find(adj[u].begin(),adj[u].end(),removed[i])!=adj[u].end())
degree--;
}


if(degree>k)
{
visited[u]=1;
cout<<u<<" ";

vector<int>::iterator it;

for(it=adj[u].begin();it!=adj[u].end();it++)
{
if(!visited[*it])
k_cores(*it,k,visited,removed);
}

}
else
{
removed.push_back(u);
}

}

void graph::print_all_k_cores(int k)
{
bool visited[no_of_vertices];
memset(visited,0,sizeof(visited));

for(int i=0;i<no_of_vertices;i++)
{
if(visited[i]==0)
{
vector<int> removed;
cout<<"One connected component"<<endl;
k_cores(i, k,visited,removed);
}
}

}


int main()
{
    // Create a graph given in the above diagram
    int k = 3;
     graph g2(13);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(0, 3);
    g2.addEdge(1, 4);
    g2.addEdge(1, 5);
    g2.addEdge(1, 6);
    g2.addEdge(2, 7);
    g2.addEdge(2, 8);
    g2.addEdge(2, 9);
    g2.addEdge(3, 10);
    g2.addEdge(3, 11);
    g2.addEdge(3, 12);
    g2.print_all_k_cores(k);
 
   
 
    return 0;
}


