#include<bits/stdc++.h>
using namespace std;

class graph
{
int vertices;
vector<pair<int,int> > *adj;
public:
graph(int v);
void add_edge(int u,int v,int w);
vector<int> shortest_path(int u,int v);
};

graph::graph(int v)
{
this->vertices=v+1;
this->adj=new vector<pair<int,int> >[v];
}

void graph::add_edge(int u,int v,int weight)
{
adj[u].push_back(make_pair(v,weight));
adj[v].push_back(make_pair(u,weight));
}

vector<int> graph::shortest_path(int u,int v)
{
pair<long long ,int> dist[vertices+1];

for(int i=1;i<=vertices;i++)
{
dist[i].first=INT_MAX;
}

dist[1].first=0;
dist[1].second=1;

set<pair<int,int> > my_set;

my_set.insert(make_pair(u,0));

while(!my_set.empty())
{
pair<int,int> temp=*my_set.begin();

my_set.erase(my_set.begin());

int s=temp.first;

int cost=temp.second;
vector<pair<int,int> >::iterator it;

for(it=adj[s].begin();it!=adj[s].end();it++)
{
int t=(*it).first;
int w=(*it).second;
if(dist[t].first>cost+w)
{
my_set.erase(make_pair(t,dist[t].first));
my_set.insert(make_pair(t,cost+w));
dist[t].first=cost+w;
dist[t].second=s;
}

}

}
vector<int> ans;

/*int current=dist[v].second;

while(dist[current].second!=1)
{
ans.push_back(current);
current=dist[current].second;
}

ans.push_back(1);

std::reverse(ans.begin(),ans.end());

ans.erase(ans.begin()+ans.size());

return ans;*/



return ans;
}

int main()
{
int n,m;
cin>>n>>m;
graph g(n+1);

while(m--)
{
int u,v,w;
cin>>u>>v>>w;
g.add_edge(u,v,w);
}

vector<int> ans=g.shortest_path(1,n);

for(int i=0;i<ans.size();i++)
{
cout<<ans[i]<<" ";
}

return 0;
}



