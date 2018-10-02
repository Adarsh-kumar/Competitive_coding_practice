#include<bits/stdc++.h>
using namespace std;

int ways_to_inc_lcs_by_1(string s1,string s2)
{
int dp[s1.size()+2][s2.size()+2];
int dp2[s1.size()+2][s2.size()+2];
int m=s1.size();
int n=s1.size();

memset(dp,sizeof(dp),0);

//creating a postion vector to store the position of the elements
vector<vector<int> > position(26);

for(int i=0;i<s2.size();i++)
{
position[s2[i]-97].push_back(i);
}

for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(i==0&&j==0)
dp[i][j]=(s1[i]==s2[j]);
else if(i==0)
dp[i][j]=max((s1[i]==s2[j]),dp[i][j-1]);
else if(j==0)
dp[i][j]=max((s1[i]==s2[j]),dp[i-1][j]);
else
{
if(s1[i]==s2[j])
dp[i][j]=dp[i-1][j-1];
else
dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
}
}
}

for(int i=m-1;i>=0;i--)
{
for(int j=n-1;j>=0;j--)
{
if(i==m-1&&j==n-1)
dp2[i][j]=(s1[i]==s2[j]);
else if(i==m-1)
dp[i][j]=max((s1[i]==s2[j]),dp[i][j+1]);
else if(j==n-1)
dp[i][j]=max((s1[i]==s2[j]),dp[i+1][j]);
else
{
if(s1[i]==s2[j])
dp[i][j]=dp[i+1][j+1];
else
dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
}
}
}
int ways=0;
for(int i=0;i<=m;i++)
{
for(char c='a',c<='z',c++)
{

//loop over all the positions


for(int j=0;j<position[c-97].size();j++)
{
p=position[c-97][j];
if(i>0)
{
if(dp[m-1][n-1]==dp[i-1][p-1]+dp2[i+1][p+1])
ways++;
}
else
{
if(dp[m-1][n-1]==dp[i-1][p-1]+dp2[i+1][p+1])
ways++;
}


}
}

return ways;

}




int main()
{
    string str1 = "abcabc";
    string str2 = "abcd";
    cout << ways_to_inc_lcs_by_1(str1, str2);
    return 0;
}
