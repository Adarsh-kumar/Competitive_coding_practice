#include<bits/stdc++.h>
using namespace std;

class graph
{
int vertices;
vector<int> *adj;

public:
graph(int v);
void add_edge(int u,int v);
void dfs(int s,int* max_len,int len,bool visited[]);
};

graph::graph(int v)
{
this->vertices=v;
this->adj =new vector<int>[v];
}


void graph::add_edge(int u,int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}

void graph::dfs(int s,int* max_len,int len, bool visited[])
{
visited[s]=1;
int current_len=0;
vector<int>::iterator it;

for(it=adj[s].begin();it!=adj[s].end();it++)
{
if(!visited[*it])
{
current_len=len+1;
dfs(*it,max_len,current_len,visited);
}

if((*max_len)<current_len)
*max_len=current_len;

current_len=0;
}

}


int main()
{
int n,q;
cin>>n>>q;
int vertices=n;
graph g(n);
n--;

while(n--)
{
int u,v;
cin>>u>>v;
g.add_edge(u-1,v-1);
}


bool visited[vertices];
int ans[vertices];

for(int i=0;i<vertices;i++)
{
memset(visited,0,sizeof(visited));
int maximum=INT_MIN;
g.dfs(i,&maximum,0,visited);
ans[i]=maximum;
}


int result=0;
int u,v;
while(q--)
{
cin>>u;
for(int i=0;i<u;i++)
{
cin>>v;

result=max(result,ans[v-1]);
}
cout<<result<<endl;
}

return 0;
}





