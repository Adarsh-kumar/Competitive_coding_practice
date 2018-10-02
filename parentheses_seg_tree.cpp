#include<iostream>
using namespace std;

typedef struct element
{
int c,o,t;
}element;

void build_the_tree(char A[],element* tree,int node,int start,int end)
{
    
    if(start==end)
    {
if(A[start]=='(')
      tree[node].o=1;
else
tree[node].c=1;
    }
    else
    {
        int mid=(start+end)/2;
        build_the_tree(A,tree,2*node,start,mid);
        build_the_tree(A,tree,2*node+1,mid+1,end);
        tree[node].o=tree[2*node].o+tree[2*node+1].o;
        tree[node].c=tree[2*node].c+tree[2*node+1].c;
        tree[node].t = min(tree[2*node].o+tree[2*node+1].c,tree[2*node].c+tree[2*node+1].o);
    }
}

int query(element* tree,int node,int start,int end,int l,int r)
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
        return tree[node].t;
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(tree,2*node, start, mid, l, r);
    int p2 = query(tree,2*node+1, mid+1, end, l, r);
    return max(p1,p2);

   }
    

int main()
{
    int n,x,k;
    n=6;
    char A[]={'(',')','(','(','(',')'};
    element* tree;
    tree=new element[2*(n)+1];
    build_the_tree(A,tree,1,0,n-1);
    cout<<query(tree,1,0,n-1,0,1);
cout<<endl;
    return 0;
}
