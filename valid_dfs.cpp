#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> dfs_vector;

bool visited[100];



void dfs(vector<vector<int> > v,int s)
{
visited[s]=1;
dfs_vector.push_back(s);

for(int i=0;i<v[s].size();i++)
{
if(!visited[v[s][i]])
dfs(v,v[s][i]);
}

}


vector<int> get_dfs_vector(vector<pair<int, int> > V,int N)
{
vector<vector<int> >v(N+1);
for(int i=0;i<100;i++)
visited[i]=0;
for(int i=0;i<V.size();i++)
{
v[V[i].first].push_back(V[i].second);
}

dfs(v,1);
return dfs_vector;
}

bool check_valid_dfs(vector<int> v,vector<int> v2)
{
map<int,int> my_map;
map<int,int> my_map2;


for(int i=0;i<v.size();i++)
my_map[v[i]]++;

for(int i=0;i<v2.size();i++)
my_map2[v2[i]]++;

for(int i=0;i<v.size();i++)
{
if(my_map[v[i]]!=my_map2[v[i]])
return 0;
}
return 1;
}

int main()
{
    // Number of vertices and number of edges
    int N = 7, M = 2;
 
    // Vector of pair to store edges
    vector<pair<int, int> > V;
 
    V.push_back(make_pair(1, 2));
    V.push_back(make_pair(2, 3));
    V.push_back(make_pair(1, 4));
    V.push_back(make_pair(1,5));
    V.push_back(make_pair(2,6));
    V.push_back(make_pair(2, 7));
     
vector<int>test={1,2,3,4,5,6,7};
 
    // Return the answer


    vector<int> ans=get_dfs_vector(V,N);
   
cout<<check_valid_dfs(ans,test);




    return 0;
}
