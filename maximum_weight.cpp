#include<iostream>
#include<bits/stdc++.h>
using namespace std;








int main()
{
int n,m,x;
int source,dest,weight;
//n is the no of vertices in the graph
cin>>n>>m>>x;
vector<vector<int> > &graph;
while(m)
{
cin>>source>>dest>>weight;
graph[source][dest]=weight;
m--;
}
 //cout<<maximum_flow(graph);
return 0;
}
