#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];
//long long sum[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int l=0,r=0;
int count=0,ans=0;
int temp;
while(l<n)
{
temp=arr[l];
r=l+1;
while((r<n && arr[r]>temp )||(r<n && count==0))
{
if(arr[r]<temp)
{
temp++;
count++;
r++;
}
else
{
temp=arr[r];
r++;
}
}
ans=max(ans,r-l);
l++;
}

cout<<ans<<endl;
return 0;
}
