#include<bits/stdc++.h>
using namespace std;

#define N 1000

#define pb push_back
#define mp make_pair

int m[N];
int tree[2*N+2];



void build(int node, int start, int end)
{
if(start == end)
tree[node]=m[start];
else
{
int mid = start+(end-start) / 2;
build(2*node, start, mid);
build(2*node+1, mid+1, end);
tree[node]=min(tree[2*node],tree[2*node+1]);
}
}


int query(int node, int start, int end, int l, int r)
{
if(r<start || end<l)
return 0;
if(start>=l&&end<=r)
return tree[node];
int mid = start+(end-start)/2;
int p1,p2;
p1 = query(2*node, start, mid, l, r);
p2 = query(2*node+1, mid+1, end, l, r);
return min(p1,p2);
}


int main()
{
int n;
cin>>n;


for(int i=0;i<n;i++)
{
cin>>m[i];
}



memset(tree,INT_MAX,sizeof(tree));
tree[0]=INT_MAX;

build(1,0,n);



int ans2[n];

for(int l=1;l<=n;l++)
{
int ans=INT_MIN;
for(int i=0;i<=n-l;i++)
{
ans=max(query(1,0,n,i,i+l-1),ans);
}

ans2[l-1]=ans;
}

for(int i=0;i<n;i++)
{
cout<<ans2[i]<<" ";
}
return 0;
}





