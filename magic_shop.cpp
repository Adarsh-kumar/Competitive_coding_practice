#include <bits/stdc++.h>

#define mod 1000000009
using namespace std;

int main()
{
int n;
cin>>n;

long long k;
cin>>k;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

long long dp[n][n];

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i==j)
dp[i][j]=arr[i];
}
}

int count=0;

for (int size=1;size<=n;size++)
{
for(int i=0;i<=n-size;i++)
{
int j=i+size-1;
if(i==j)
{
if(arr[i]<=k)
count++;
}

else if(size%2==0)
{

if(size==2)
dp[i][j]=arr[j-1]*arr[j];

else
dp[i][j]=dp[i][j-2]+arr[j-1]*arr[j];

if(dp[i][j]<=k)
count++;
}

else if(size%2!=0)
{
dp[i][j]=dp[i][j-1]+arr[j-1]*1;
if(dp[i][j]==k)
count++;
}

}
}

cout<<count<<endl;

return 0;
}


