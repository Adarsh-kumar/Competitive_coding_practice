#include<bits/stdc++.h>
using namespace std;
#define N 1000

#define pb push_back
#define mp make_pair

//Template ends here
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
return max(p1,p2);
}

/*void update(int node,int start,int end,int l,int r)
{
if(r<start || end<l)
return ;
else if(start==end)
tree[node]+=1;
else
{
int mid=start+(end-start)/2;
update(2*node,start,mid,l,r);
update(2*node+1,mid+1,end,l,r);
tree[node]=max(tree[2*node],tree[2*node+1]);
}

}*/



int main()
{
int t;
cin>>t;
while(t--)
{
int n=100;
memset(m,0,sizeof(m));
memset(tree,0,sizeof(tree));
build(1,0,100);
int q;
cin>>(q);
while(q--)
{
  int x,y;
  cin>>x>>y;
  update(1,0,100,x,y);
}
  int ans = query(1,0,100,0,100);
  printf("%d\n",ans);
}

return 0;
}


