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
void print_dfs(int u,bool visited[],int  &count);
graph transpose_the_graph();
int print_the_scc(void);
stack<int> get_finishing_order(int u,bool visited[],stack<int> &st);

};

graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<int> [v];
}

void graph::addEdge(int u,int v)
{
this->adj[u].push_back(v);

}

graph graph::transpose_the_graph()
{
 int V=this->no_of_vertices;
    graph g(this->no_of_vertices);
    for (int v = 0; v < V; v++)
    {
        // Recur for all the vertices adjacent to this vertex
        vector<int>::iterator it;
        for(it = adj[v].begin(); it != adj[v].end(); it++)
        {
            g.adj[*it].push_back(v);
        }
    }
    return g;
}

stack<int> graph::get_finishing_order(int u,bool visited[],stack<int> &st)
{
visited[u]=1;
vector<int>::iterator  it;

for(it=adj[u].begin();it!=adj[u].end();it++)
{
if(visited[*it]==0)
get_finishing_order(*it,visited,st);
}

st.push(u);
 return st;


}

void graph::print_dfs(int u,bool visited[],int &count)
{
visited[u]=1;
cout<<u<<" ";

vector<int>:: iterator it;

for(it=adj[u].begin();it!=adj[u].end();it++)
{
if(!visited[*it])
print_dfs(*it,visited,count);
else
{
int s=*it;
vector<int>::iterator it2;

for(it2=adj[s].begin();it2!=adj[s].end();it2++)
{
visited[*it2]=1;
}

count++;
}
}

}

int graph::print_the_scc(void )
{
bool visited[no_of_vertices];

memset(visited,0,sizeof(visited));
int count=0;
for(int i=0;i<no_of_vertices;i++)
{
if(visited[i]==0)
{
print_dfs(i,visited,count);

}
}


return count;
}

int main()
{
int n,m;
cin>>n>>m;

graph g(n);
while(m--)
{
int u,v,e;
cin>>u>>v>>e;
if(u!=v)
g.addEdge(u-1,v-1);
}

cout<<g.print_the_scc()<<endl;

return 0;
}


