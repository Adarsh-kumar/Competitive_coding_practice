#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int val;
int index;
}node;


bool comp(node aa,node b)
{
return (aa.val<b.val);
}

int binarysearch(node arr[],int start,int end,int val)
{
int lo=start;
int hi=end;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid].val==val)
return arr[mid].index;

else if(arr[mid].val>val)
hi=mid;

else
lo=mid+1;
}

return arr[lo].index;
}


int main()
{
int n;
cin>>n;

node arr[n];

int start;

for(int i=0;i<n;i++)
{
cin>>arr[i].val;
arr[i].index=i;
if(arr[i].val==1)
start=i;
}

sort(arr,arr+n,comp);

long long ans=0;

for(int i=2;i<=n;i++)
{
int temp=binarysearch(arr,0,n,i);
ans+=abs(start-temp);
start=temp;
}

cout<<ans<<endl;

return 0;
}

