#include <bits/stdc++.h>

#define mod 1000000009
using namespace std;

long long arr[20];

//int dp[20][15*1000000];

int main()
{
int t,n,q;

cin>>t;

while(t--)
{
cin>>n;
int sum=15000000;

for(int i=0;i<n;i++)
{
cin>>arr[i];
sum+=arr[i];
}

cin>>q;

for(int i=0;i<n;i++)
{
for(int s=0;s<=sum;s++)
{
if(s==0)
dp[i][s]=1;
else
dp[i][s]=0;

if(i==0)
{
if(s==arr[i])
dp[i][s]=1;
}
else
{
if(s-arr[i]>=0)
dp[i][s]=dp[i-1][s-arr[i]]||dp[i-1][s];
else
dp[i][s]=dp[i-1][s];
}

}
}

if(dp[n-1][q])
cout<<"YES"<<endl;
else
cout<<"No"<<endl;

}

return 0;
}


