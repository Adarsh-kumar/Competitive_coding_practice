#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int val;
map<int,int> dp;

for(int i=0;i<n;i++)
{
cin>>arr[i];
dp[arr[i]]=max(dp[arr[i]],dp[arr[i]-1]+1);
}

int ans=0;
for(auto it=dp.begin();it!=dp.end();it++)
{
if(it->second>ans)
{
ans=max(ans,it->second);
val=it->first;
}
}
cout<<ans<<endl;
int count=0;

for(int i=0;i<n&&count<ans;i++)
{
if(arr[i]==(val-(ans-1))+count)
{
cout<<i+1<<" ";
count++;
}
}

return 0;
}



