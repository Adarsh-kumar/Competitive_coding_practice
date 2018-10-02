#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int max_time(int arr1[],int arr2[],int n,int k)
{
int maximum=-500;
int ans;
int count;
for(int i=0;i<n-k;i++)
{
count=0;
ans=0;
if(arr2[i]==1)
continue;
int j=i;
while(count!=k&&j<n)
{
ans+=arr1[j];
if(arr2[j]==0)
count++;
j++;
}
ans=max(maximum,ans);
if(ans>maximum)
maximum=ans;
}
return ans;
}

int main()
{
int n,k;
while(scanf("%d%d",&n,&k)!=EOF)
{
//cin>>n>>k;
int arr1[n];
int arr2[n];
for(int i=0;i<n;i++)
cin>>arr1[i];
for(int i=0;i<n;i++)
cin>>arr2[i];

cout<<max_time(arr1,arr2,n,k)<<endl;
}
return 0;
}
