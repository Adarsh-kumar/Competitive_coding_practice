#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> *arr,int n,int s)
{
vector<int> bfs1;
queue<int> q;
q.push(s);
bool visited[n];

for(int i=0;i<n;i++)
visited[i]=0;
visited[s]=1;
bfs1.push_back(s);

while(!q.empty())
{
    int u=q.front();
    q.pop();
    for(auto it=arr[u].begin();it!=arr[u].end();it++)
    {
        int v=*it;
        
        if(visited[v]!=1)
        {
            visited[v]=1;
            bfs1.push_back(v);
            q.push(v);
        }
    }
    
   
}
 return bfs1;
}

bool is_it(int a,int b)
{
    int p=a^b;
    
    for(int i=0;i<64;i++)
    {
        if(p==pow(2,i))
        return 1;
    }
    return 0;
}

int main()
{
    
    int n;
    cin>>n;
    int val[n+1];
    
    vector<int> *arr;
    
    arr=new vector<int>[n+1];
    
    
    for(int i=1;i<=n;i++)
    {
        cin>>val[i];
    }
        int u,v;
    for(int i=0;i<n-1;i++)
    {
    
        cin>>u>>v;
        arr[u].push_back(v);
//arr[v].push_back(u);
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        cin>>u>>v;
        vector<int> bfs_1;
        vector<int> bfs_2;
        
        bfs_1=bfs(arr,n+1,u);
        bfs_2=bfs(arr,n+1,v);
        


        int count=0;
        
        for(int i=0;i<bfs_1.size();i++)
        {
            for(int j=0;j<bfs_2.size();j++)
            {
                if(is_it(val[bfs_1[i]],val[bfs_2[j]]))
                count++;
            }
        }
        cout<<count<<endl;
        
    }

}
