#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class graph
{
int no_of_vertices;
vector<int> *adj;
public:
graph(int v);
void add_edge(int u,int v);
vector<int> bfs_traversal(int s,int t);
vector<int> dfs_traversal(int s,int t);
bool is_connected(int s,int t);
int no_of_connected_components();
vector<int> find_list_of_articulation_points();
};

graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<int> [v];
}

void graph::add_edge(int u,int v)
{
this->adj[u].push_back(v);
this->adj[v].push_back(u);
}


vector<int> graph::bfs_traversal(int s,int t)
{
queue<int> q;
q.push(s);
vector<int> parent(this->no_of_vertices);
vector<int> bfs_vector;
vector<int>::iterator it;
bool visited[t];
for(int i=0;i<t;i++)
{
visited[i]=0;
}


while(!q.empty())
{
int u=q.front();
visited[u]=1;
bfs_vector.push_back(u);
for(it=this->adj[u].begin();it!=this->adj[u].end();it++)
{
int v=*it;
if(!visited[v])
{
q.push(v);
parent[v]=u;
visited[v]=1;
}
}
q.pop();
}

return bfs_vector;
}

vector<int> graph::dfs_traversal(int s,int t)
{
stack<int> q;
q.push(s);
vector<int> parent(this->no_of_vertices);
vector<int> dfs_vector;
vector<int>::iterator it;
bool visited[t];
for(int i=0;i<t;i++)
{
visited[i]=0;
}


while(!q.empty())
{
int u=q.top();
dfs_vector.push_back(u);
visited[u]=1;

for(it=this->adj[u].begin();it!=this->adj[u].end();it++)
{
int v=*it;
if(!visited[v])
{
q.push(v);
parent[v]=u;
visited[v]=1;
}
}
q.pop();
}

return dfs_vector;
}

int main()
{
    // Create a graph given in the above diagram
    graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    vector<int> my_bfs=g.bfs_traversal(2,4);
    for(int i=0;i<my_bfs.size();i++)
    cout<<my_bfs[i]<<" ";

    return 0;
}


