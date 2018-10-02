#include<iostream>
using namespace std;
#define max 5000
int min_partitions(string s)
{
int size=s.size();
int dp[size][size];
    bool P[n][n];
for(int gap=0;gap<size;gap++)
{
for(int i=0,j=gap;j<size,i++,j++)
{
dp[i][j]=max;
if(j-i<1)
dp[i][j]=1;
else 
{
if (j-i == 2)
P[i][j] = (str[i] == str[j]);
else
P[i][j] = (str[i] == str[j]) && P[i+1][j-1];
}
if (P[i][j] == true)
                dp[i][j] = 0;
            else
            {
for(int k=i+1;k<j;k++)
dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+1);
}
}
}
return dp[0][size];
}

int main()
{
   string str = "ababbbabbababa";
   cout<<min_partitions(str);
   return 0;
}


