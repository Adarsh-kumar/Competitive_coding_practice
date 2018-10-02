vector<vector<int> > dfs(int s)
{
adj=this->adj;
stack<int> st;
vector<int> parent(this->no_of_vertices);
vector<int> dfs_vec;

bool visited[this->no_of_vertices];

memset(parent,-1,sizeof(parent));
memset(visited,-1,sizeof(visited));

st.push(s);
dfs_vec.push_back(s);
visited[s]=1;


while(!st.empty())
{
int u=st.top();
st.pop();
vector<int>::iterator it;
for(it=adj[u].begin();it!=adj[u].end();it++)
{
v=*it;
if(!visited[v])
{
visited[v]=1;
parent[v]=u;
dfs_vec.push_back(v);
}
}
}

vector<vector<int > > ans;
ans.push_back(dfs_vec);
ans.push_back(parent);

return ans;

}
