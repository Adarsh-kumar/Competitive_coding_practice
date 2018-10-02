#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define mini=-5000000
using namespace std;

int max_min_expression_value(string exp)
{
int size=exp.size();
int dp[size][size];
for(int i=0;i<size;i+=2)
{
for(int j=i;j<size;j+=2)
{
if (i==j)
dp[i][j]=exp[i];
else if(abs(i-j)==2)
{
dp[i][j]=(exp[i])(exp[j-1])(exp[j]);
}
else
{
for(int k=i;k<=j;k+=2)
{
dp[i][j]=max(mini,(dp[i][k])(exp[k+1])(dp[k+2][j]));
}
}
}
}
return dp[0][size-1];
}



int main()
{
int t;
string exp;
cin>>t;
while(t)
{
cin>>exp;
max_min_expression_value(exp);
t--;
}
return 0;
}

