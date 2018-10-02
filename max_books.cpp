#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k,l=0,r=0;
cin>>n>>k;
long long arr[n];
long long sum[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
if(i!=0)
sum[i]=arr[i]+sum[i-1];
else
sum[i]=arr[i];
}
int ans=0;
int s,count=0;ans=0;
while(l<n)
{
r=l;
count=0;
if(l>0)
{
while(r<n&&sum[r]<=k)
{
r++;
count++;

}
ans=max(ans,count);
l++;
}
else
{
while(r<n&&sum[r]-sum[l-1]<=k)
{
r++;
count++;
}
ans=max(ans,count);
l++;
}
}

cout<<ans<<endl;
return 0;
}



