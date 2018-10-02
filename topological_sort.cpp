#include<iostream>
#include<bits/stdc++.h>
#define M 6
#define N 6

using namespace std;

typedef struct node
{
int v;
int weight;
}node;

class graph
{
int no_of_vertices;
vector<node> *adj;
public:
graph(int v);
void addEdge(int u,int v,int weight);
vector<vector<int> > dfs(int s);
void print_dfs(int u,bool visited[]);
void topological_sorting(stack<int> &st,bool visited[],int u);
vector<int> print_topological_sorting();
int* longest_path_between_two_nodes(int s);
};

graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<node> [v];
}

void graph::addEdge(int u,int v,int weight)
{
this->adj[u].push_back({v,weight});
}

void graph::topological_sorting(stack<int> &st,bool visited[],int u)
{
visited[u]=1;
vector<node>::iterator it;


for(it=adj[u].begin();it!=adj[u].end();it++)
if(visited[(it)->v]==0)
topological_sorting(st,visited,(it)->v);


st.push(u);
}


int* graph::longest_path_between_two_nodes(int s)
{
vector<int> ans=print_topological_sorting();

int *dist =new int[no_of_vertices];


dist[s]=0;

for(int i=0;i<no_of_vertices;i++)
{
vector<node>::iterator it;
if(dist[i]!=-50)
{
for(it=adj[ans[i]].begin();it!=adj[ans[i]].end();it++)
{
if(dist[(it)->v]<dist[ans[i]]+(it)->weight)
dist[(it)->v]=dist[]+(it)->weight;

}
}
}

return dist;
}

vector<int> graph::print_topological_sorting()
{
stack<int> st;
bool visited[no_of_vertices];
memset(visited,0,sizeof(visited));
for (int i = 0; i < no_of_vertices; i++)
      if (visited[i] == false)
topological_sorting(st,visited,i);

vector<int> ans;

while(!st.empty())
{
ans.push_back(st.top());
st.pop();
}

return ans;
}

int main()
{
    // Create a graph given in the above diagram
    graph g(6);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 2, 2);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(2, 3, 7);
    g.addEdge(3, 5, 1);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);
 
  //  cout << "Following is a Topological Sort of the given graph \n";
vector<int> topo;    
topo=g.print_topological_sorting();
for(int i=0;i<topo.size();i++)
cout<<topo[i]<<" ";
cout<<endl;
    int *arr;
int s=1;
arr=g.longest_path_between_two_nodes(s);
for(int i=0;i<6;i++)
cout<<arr[i]<<" ";

cout<<endl;
 
    return 0;
}

