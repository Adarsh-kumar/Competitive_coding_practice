#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;
int max_sum_traingle(std::vector< std::vector<int> > &vec)
{
int size=vec.size();
int dp[size][size];
dp[0][0]=vec[0][0];
for(int i=1;i<vec.size();i++)
{
dp[i][0]=dp[i-1][0]+vec[i][0];
dp[i][i]=dp[i-1][i-1]+vec[i][i];
for(int j=i-1;j>0;j--)
{
dp[i][j]=max(vec[i][j]+dp[i-1][j-1],vec[i][j]+dp[i-1][j]);
}
}
int ans=0;
for(int i=0;i<size;i++)
ans=max(ans,dp[size-1][i]);

return ans;
}

int main()
{
int t,n;
cin>>t;
int temp;
while(t)
{
cin>>n;
vector< vector<int> > vec;
for(int i=0;i<n;i++)
{
vector<int> row;
for(int j=0;j<=i;j++)
{
cin>>temp;
row.push_back(temp);
}
vec.push_back(row);
}
cout<<max_sum_traingle(vec)<<endl;
t--;
}
return 0;
}
