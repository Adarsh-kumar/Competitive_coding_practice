
bool visited[100005];

class graph
{
    public:
    int v;
    vector<int> *adj;
    int *arr;
    public:
    graph(int n);
    void add_edge(int u,int v);
    void topological_sort(vector<int> adj[],int u,stack<int> &st);
    vector<int> get_roots(void);
    bool is_cyclic(int root);
}

graph::graph(int n)
{
v=n;
adj=new vector<int>[n];
arr=new int[n];
    memset(arr,0,sizeof(arr));
}

void graph::add_edge(int u,int v)
{
adj[u].push_back(v);
arr[u]++;
}

vector<int> graph::get_roots(void)
{
    vector<int> rt;
    for(int i=0;i<v;i++)
        if(arr[i]==0)
            rt.push_back(i);
    
    return rt;
}

bool graph::is_cyclic(int root)
{

}



void graph::topological_sort(vector<int> adj[],int u,stack<int> &st)
{
visited[u]=1;
vector<int>::iterator it;
    for(it=adj[u].begin();it!=adj[u].end();it++)
    {
        if(!visited[*it])
            topological_sort(adj,*it,st);
    }
    st.push(u);
}


class Solution {
public:
    vector<int> findOrder(int n, vector<pair<int, int>>& v) {
        
        vector<int> adj[n];
        
        for(int i=0;i<v.size();i++)
            adj[v[i].first].push_back(v[i].second);
        
        stack<int> st;
        topological_sort(adj,&st);
        vector<int> ans;
        for(int i=0;i<n;i++)
            if(visited[i]==0)
                return ans;
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
    }
};
