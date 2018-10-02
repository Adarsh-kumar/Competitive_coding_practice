#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int start,end,duration;
long long price;
}node;

bool comparator(node a,node b)
{
return (a.duration<b.duration);
}

int binary_search(node arr[],int start,int end,int duration)
{
int mid=start+(end-start)/2;
if(arr[mid].duration==duration)
return(mid);
else if(start==end)
{
if(arr[start].duration==duration)
return(start);
else
return(-1);
}
else if(arr[mid].duration>duration)
return(binary_search(arr,start,mid,duration));
else
return (binary_search(arr,mid+1,end,duration));
}


int main()
{
int n,x;
cin>>n>>x;
node arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i].start>>arr[i].end>>arr[i].price;
arr[i].duration=arr[i].end-arr[i].start+1;
}

sort(arr,arr+n,comparator);

long long  ans=INT_MAX;
long long cost;
int temp;
for(int i=0;i<n;i++)
{
cost=arr[i].price;
temp=binary_search(arr,0,n,x-arr[i].duration);
//cout<<temp<<endl;
if(temp!=-1)
{
if(arr[temp].start>arr[i].end||arr[i].start>arr[temp].end)
cost+=arr[temp].price;
else
cost=INT_MAX;
}
else
cost=INT_MAX;
ans=min(cost,ans);
}

if(ans==INT_MAX)
cout<<-1<<endl;
else
cout<<ans<<endl;


return 0;
}



