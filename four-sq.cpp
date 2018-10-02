#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int dp[4][1000];

int n=1000;

int main()
{
int t,n,z;

for(int i=0;i<4;i++)
{
for (int j=0;j<n;j++)
{
if(i==0)
{
if(sqrt(j)*sqrt(j)==j)
dp[i][j]=2;
else
dp[i][j]=1;
}

else
{
dp[i][j]=0;
for(int k=i-1;k>=0;k--)
dp[i][j]+=dp[k][n-1-j];
}

}
}
cin>>t;

while(t--)
{
int q;
cin>>q;
cout<<dp[3][q]<<endl;
}

return 0;
}

