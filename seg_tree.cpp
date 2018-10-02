#include<iostream>
using namespace std;
int arr[1000];
int tree[1000];
long long permute[1000];

int function(int x,int k)
{
if(x%k==0)
    return 1;
    else
        return(0);
}

void build_the_tree(int node,int start,int end)
{
    
    if(start==end)
    {
      tree[node]=arr[start];
    }
    else
    {
        int mid=(start+end)/2;
        build_the_tree(2*node,start,mid);
        build_the_tree(2*node+1,mid+1,end);
        tree[node] = (tree[2*node]) + (tree[2*node+1]);
    }
}

int query(int node,int start,int end,int l,int r)
{
// basic three cases 
// the given range is completly inside our taken range
// completly outside our range 
// partially inside our range
if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);

   }

//update the value at a particular index
void update_index_wise(int node,int start,int end,int indx,int val)
{
if(start==end)
{
arr[start]+=permute[val]-permute[arr[start]];
tree[node]+=permute[val]-permute[arr[start]];
}
else
{
int mid=(start+end)/2;
if(start<=indx && indx<=mid)
{
update_index_wise(2*node,start,mid,indx,val);
}
else 
{
update_index_wise(2*node+1,mid+1,end,indx,val);
}
tree[node]=tree[2*node]+tree[2*node+1];
}

}

int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];

permute[0]=1;
for(int i=1;i<1000;i++)
permute[i]=i*permute[i-1];


for(int i=0;i<n;i++)
arr[i]=permute[arr[i]];

    build_the_tree(1,0,n-1);
    cout<<query(1,0,n-1,0,4);
update_index_wise(1,0,n-1,0,5);
cout<<query(1,0,n-1,0,4);
cout<<endl;
 
    return 0;
}
