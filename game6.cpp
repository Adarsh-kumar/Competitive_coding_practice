#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

string s;
cin>>s;

long long  prefix[n+1];

long long suffix[n+1];

prefix[0]=0;

long long sum[n+1];

sum[0]=0;

for(int i=0;i<=n;i++)
{
sum[i+1]=sum[i]+arr[i];
}


for(int i=0;i<n;i++)
{
if(s[i]=='A')
prefix[i+1]=prefix[i]+arr[i];
else
prefix[i+1]=prefix[i];
}

suffix[0]=0;

for(int i=0;i<n;i++)
{
if(s[n-1-i]=='A')
suffix[i+1]=suffix[i]+arr[n-1-i];
else
suffix[i+1]=suffix[i];
}

long long ans=INT_MIN;

for(int i=0;i<=n;i++)
{
ans=max((sum[i]-sum[0])-prefix[i]+suffix[n-i],ans);
}


for(int i=0;i<=n;i++)
{
ans=max((sum[n]-sum[n-i])-suffix[i]+prefix[n-i],ans);
}

cout<<ans<<endl;

return 0;
}



