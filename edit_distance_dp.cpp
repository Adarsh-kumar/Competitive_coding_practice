#include<iostream>
#include<string>
using namespace std;


int min(int x, int y, int z)
{
   return min(min(x, y), z);
}

int edit_distance_dp(string s1,string s2,int l1,int l2)
{
int* dp[l1];
for(int i=0;i<l1;i++)
dp[i]=new int[l2];

//forming a matrix using bottom up approach
for(int i=0;i<l1;i++)
{
for(int j=0;j<l2;j++)
{
if(i==0)
dp[i][j]=j;
else if(j==0) 
dp[i][j]=i;
else if(s1[i]==s2[j])
dp[i][j]=dp[i-1][j-1];
else
dp[i][j]=1+min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]);
}
}
return dp[l1-1][l2-1];
}

int main()
{
string s1="geek";
string s2="wooeek";
int l1=s1.size();
int l2=s2.size();
//cout<<dp[l1-1][l2-1];
//cout<<l1;
cout<<edit_distance_dp(s1,s2,l1,l2);
return 0;
}
