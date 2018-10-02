#include<iostream>
#include<bits/stdc++.h>
#define M 6
#define N 6

using namespace std;

class graph
{
int no_of_vertices;
vector<int> *adj;
public:
graph (int v);
void addEdge(int u,int v);
vector<vector<int> > dfs(int s);
void print_dfs(int u,bool visited[]);
void topological_sorting(stack<int> &st,bool visited[],int u);
vector<int> print_topological_sorting();
int* longest_path_between_two_nodes(int s);
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

void graph::topological_sorting(stack<int> &st,bool visited[],int u)
{
visited[u]=1;
vector<int>::iterator it;


for(it=adj[u].begin();it!=adj[u].end();it++)
if(visited[*(it)]==0)
topological_sorting(st,visited,*(it));


st.push(u);
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


int check_match(string a ,string b)
{
    int i;
for(i=0;i<a.size();i++)
{
if(a[i]!=b[i])
break;
}
    return i;
}

void print_order(string arr[],int n,int m)
{
graph g(3);
int first_mismatch;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
first_mismatch=check_match(arr[i],arr[j]);
g.addEdge(arr[i][first_mismatch]-97,arr[j][first_mismatch]-97);
}
}
string alpha="abcdefghijklmnopqrstuvwxyz";
vector<int> topo=g.print_topological_sorting();
for(int i=0;i<topo.size();i++)
cout<<alpha[topo[i]]<<" ";


}
int main()
{
    cout<<'a'-97<<"checking it"<<endl;
    string words[] = {"caa", "aaa", "aab"};
    print_order(words, 3, 3);
    return 0;
}
