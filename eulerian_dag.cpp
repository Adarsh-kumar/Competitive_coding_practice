#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class graph
{
int no_of_vertices;
vector<int> *adj;
int *in;
public:
graph(int v);
void addEdge(int u,int v);
bool iseuler();
bool check_the_scc();
bool check_order();
vector<vector<int> > dfs(int s);
void print_dfs(int u,bool visited[]);
graph transpose_the_graph();
void print_the_scc();
stack<int> get_finishing_order(int u,bool visited[],stack<int> &st);
void print_mother_vertex();
};

graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<int> [v];
this->in=new int[v];
memset(this->in,0,sizeof(in));
}

void graph::addEdge(int u,int v)
{
this->adj[u].push_back(v);
this->in[v]++;
}

bool graph::check_order()
{
int odegree=adj[0].size();
for(int i=0;i<no_of_vertices;i++)
{
if(adj[i].size()!=in[i])
return 0;
}
return 1;
}

bool graph::iseuler()
{

return( check_order()&&check_the_scc());
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

void graph::print_dfs(int u,bool visited[])
{
visited[u]=1;
cout<<u<<" ";

vector<int>:: iterator it;

for(it=adj[u].begin();it!=adj[u].end();it++)
{
if(!visited[*it])
print_dfs(*it,visited);
}
}

bool graph::check_the_scc()
{
stack<int> st;
bool visited[this->no_of_vertices];

memset(visited,0,sizeof(visited));

st=get_finishing_order(0,visited,st);

memset(visited,0,sizeof(visited));

graph gr=transpose_the_graph();

int x=st.top();

gr.print_dfs(x,visited);

for(int i=0;i<no_of_vertices;i++)
{
if(visited[i]!=1)
return 0;
}
return 1;
}

void graph::print_the_scc()
{
stack<int> st;
bool visited[this->no_of_vertices];

memset(visited,0,sizeof(visited));

st=get_finishing_order(0,visited,st);

memset(visited,0,sizeof(visited));

graph gr=transpose_the_graph();

while(!st.empty())
{
int node=st.top();
st.pop();
if(!visited[node])
gr.print_dfs(node,visited);
}

}

void graph::print_mother_vertex()
{
stack<int> st;
bool visited[this->no_of_vertices];

memset(visited,0,sizeof(visited));

st=get_finishing_order(0,visited,st);

int node=st.top();

memset(visited,0,sizeof(visited));
print_dfs(node,visited);
bool flag=1;
for(int i=0;i<no_of_vertices;i++)
{
if(visited[i]==0)
flag=0;
}
if(flag)
cout<<"one of the mother  vertex "<<node;

}

int main()
{
    // Create a graph given in the above diagram
      graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 0);
 
    if (g.iseuler())
       cout << "Given directed graph is eulerian n";
    else
       cout << "Given directed graph is NOT eulerian n";


    return 0;
}




