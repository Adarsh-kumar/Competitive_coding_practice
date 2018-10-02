#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,m;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int dp[n][n];

for(int i=0;i<n;i++)
dp[i][i]=1;

for(int l=2;l<n;l++)
{
for(int i=0;i<=n-l;i++)
{
int j=i+l-1;

if(l>2)
{
if(arr[j]>=arr[j-1]&&arr[j]>=arr[j-2]||(arr[j]<=arr[j-1]&&arr[j]<=arr[j-2])
dp[i][j]=1+dp[i][j-1];
else
dp[i][j]=dp[i][j-1];
}

else
{
dp[i][j]=2;
}

}
}

while(m--)
{
int a,b;
cin>>a>>b;

