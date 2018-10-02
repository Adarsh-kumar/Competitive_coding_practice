#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;
char arr[n];
//long long sum[n];
for(int i=0;i<n;i++)
cin>>arr[i];

int l=0,r=0;
int count,ans=0;
while(l<n)
{
r=l;
count=0;
while( (r<n&&arr[r]==arr[l] )|| (r<n && count<k))
{
if(l>0&&arr[l]==arr[l-1])
break;
else if(l>0 &&arr[l]!=arr[l-1])

if(arr[r]!=arr[l])
count++;
r++;
}
ans=max((r-l),ans);
l++;
}

cout<<ans<<endl;
return 0;
}

