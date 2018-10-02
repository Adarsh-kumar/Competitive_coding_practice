#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int lcs_with_constraints(string s1,string s2,int k)
{
int size1=s1.size();
int size2=s2.size();

int dp[size1][size2];
for(int i=0;i<size1;i++)
{
for(int j=0;j<size2;j++)
{
/*if(i==0&&j==0)
dp[i][j]=(s1[i]==s2[j]);
else if(i==0)
{
if(s1[i]==s2[j])
dp[i][j]=1;
else
dp[i][j]=dp[i][j-1];
}
else if(j==0)
{
if(s1[i]==s2[j])
dp[i][j]=1;
else
dp[i][j]=(dp[i-1][j]);
}*/
if(s1[i]==s2[j])
{
int temp=0;
for(int p=1;p<k;p++)
{
if(s1[i-p]!=s2[j-p]||(i-p)<0||(j-p)<0)
break;
temp++;
}
if(temp==k-1)
{
if((i-k)>0&&(j-k)>0)
dp[i][j]=k+dp[i-k][j-k];
else 
dp[i][j]=k;
}
else
dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
}

else
dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
}
}
return dp[size1-1][size2-1];
}


int main()
{
int n;
cin>>n;
string s1,s2;
cin>>s1>>s2;
cout<<lcs_with_constraints(s1,s2,n)<<endl;
return 0;
}

