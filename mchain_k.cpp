#include<bits/stdc++.h>
using namespace std;
#define maxn 100005

int main()
{
int n,div;
cin>>n>>div;
int arr[n];
long long mult[n+1];

mult[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
mult[i+1]=mult[i]+arr[i];
}

int dp[n][n][div+1];

for(int d=1;d<=div;d++)
{
for(int l=2;l<=n;l++)
{
for(int i=0;i<=n-l;i++)
{
int j=i+l-1;
dp[i][j][d]=INT_MIN;
if(d==1)
{
dp[i][j][d]=mult[j+1]-mult[i];
}
else
{
for(int k=i+1;k<j;k++)
{
dp[i][j][d]=max(dp[i][j][d],(dp[i][k][1]&dp[k+1][j][d-1]));
}
}

}
}
}

cout<<dp[0][n-1][div]<<endl;

return 0;
}

