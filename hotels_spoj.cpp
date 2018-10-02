#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max_sum_k(long long  arr[],int n,int k)
{
int l=0,r=0;

long long ans=0;
long long sum=0;

while(l<=r)
{
while(r<n && sum+arr[r]<=k)
{
sum+=arr[r];
if(sum==k)
return k;
r++;
}
ans=max(ans,sum);
sum=sum-arr[l];
l++;
}

return (ans);
}

int main()
{
int n,k;
cin>>n>>k;
long long arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

cout<<max_sum_k(arr,n,k)<<endl;
return 0;
}





