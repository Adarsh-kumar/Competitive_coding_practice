#include <bits/stdc++.h>

#define mod 1000000009
using namespace std;

int main()
{
int n,k;
cin>>n>>k;

long long arr[n];

long long cost[n];

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
cin>>cost[i];

int helper[n];
long long dp[n][2];



for(int i=0;i<n;i++)
{

if(i==0)
{
dp[i][0]=arr[i];
dp[i][1]=cost[i];
}

else
{
dp[i][0]=min(dp[i-1][0]+arr[i],dp[i-1][1]+arr[i]);

dp[i][1]=cost[i];

for(int p=i;p>=0&&p>i-k;p--)
{
if(p>0)
dp[i][1]=min(dp[i][1],cost[p]+min(dp[p-1][0],dp[p-1][1]));
else
dp[i][1]=min(dp[i][1],cost[p]);
}

}


}
cout<<min(dp[n-1][0],dp[n-1][1])<<endl;

return 0;
}

