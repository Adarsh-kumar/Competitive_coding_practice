#include<bits/stdc++.h>
using namespace std;

typedef struct node 
{
int left;
int right;
}node;


bool comp(node a ,node b)
{
if(a.left!=b.left)
return (a.left<b.left);
else
return (a.right<b.right);
}

int main()
{
int n,m;
cin>>n;
node arr[n];


for(int i=0;i<n;i++)
{
cin>>arr[i].left>>arr[i].right;
}
cin>>m;
node  arr2[m];
for(int i=0;i<m;i++)
{
cin>>arr2[i].left>>arr2[i].right;
}

sort(arr,arr+n,comp);
sort(arr2,arr2+m,comp);

int ans=INT_MIN;

for(int i=0;i<n;i++)
{
ans=max(ans,arr2[m-1].left-arr[i].right);
}

for(int i=0;i<m;i++)
{
ans=max(ans,arr[n-1].left-arr2[i].right);
}
if(ans>0)
cout<<ans<<endl;
else
cout<<0<<endl;
return 0;
}

