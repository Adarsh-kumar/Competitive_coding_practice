#include<bits/stdc++.h>

using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
long long arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

int dp[n+1];
memset(dp,0,sizeof(dp));

for(int i=0;i<n;i++)
{
if(arr[i]%((arr[i]+1)/2)==0)
{
dp[i+1]=1;
}
}

for(int i=1;i<n;i++)
dp[i]=dp[i-1]+dp[i];

for(int i=0;i<=n;i++)
cout<<dp[i]<<" ";
cout<<endl;

int q;
cin>>q;
int l,r;

while(q--)
{
cin>>l>>r;
l--;
r--;
int seq_len=(r+1)-l;
int old_count=dp[r]-dp[l-1];
int cold_count=seq_len-old_count;

if(old_count<cold_count)
cout<<(cold_count-old_count)/2+1<<endl;

else
cout<<0<<endl;
}
}
return 0;
}

