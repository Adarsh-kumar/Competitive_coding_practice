#include<bits/stdc++.h>
using namespace std;

int palin_part(string s)
{
int size=s.size();
int dp[size][size];
bool p[size][size];

for(int i=0;i<size;i++)
{
dp[i][i]=0;
p[i][i]=1;
}


for(int l=2;l<=size;l++)
{
for(int i=0;i<=size-l;i++)
{
int j=i+l-1;
if(l==2)
{
p[i][j]=(s[i]==s[j]);
dp[i][j]=p[i][j];
}
else
{
p[i][j]=(s[i]==s[j])&&(p[i+1][j-1]);

if(p[i][j]==1)
dp[i][j]=0;
else
{
dp[i][j]=INT_MAX;
for(int k=i;k<j-1;k++)
dp[i][j]=min(dp[i][k]+dp[k+1][j]+1,dp[i][j]);
}
}
}
}

return dp[0][size-1];
}

int main()
{
   string str="ababbbabbababa";
   printf("Min cuts needed for Palindrome Partitioning is %d",
           palin_part(str));
   return 0;
}

