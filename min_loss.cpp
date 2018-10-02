#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;

long long arr[n];
long long suf[n];
long long pre[n];
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
{
if(i==0)
pre[i]=arr[i];
else
pre[i]=min(pre[i-1],arr[i]);
}

for(int i=0;i<n;i++)
{
if(i==0)
pre[i]=arr[i];
else
pre[i]=min(pre[i-1],arr[i]);
}

for(int i=n-1;i>=0;i--)
{
if(i==n-1)
suf[i]=arr[i];
else
suf[i]=max(arr[i],suf[i+1]);
}

long long ans=10000000000000000;

for(int i=0;i<n-1;i++)
{
if(pre[i]-suf[i+1]>0)
{
ans=min(ans,pre[i]-suf[i+1]);
}
}

cout<<ans<<endl;

return 0;
}






