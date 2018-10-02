#include<iostream>
#include<bits/stdc++.h>

int min_char(string s)
{
int dp[s.size()][s.size()];
bool p[s.size()][s.size()];
int n=s.size();

for(int i=0;i<s.size();i++)
{
p[i][i]=1;
}

for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
p[i][j]=(s[i]==s[j])&&(p[i+1][j-1]);

if(p[i][j]==1)
dp[i][j]=0;

else
{






int main()
{
string s;
cout<<min_char(s);
return 0;
}
