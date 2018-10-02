#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int  strmatch(string a,string b)
{
int dp[a.size()][b.size()];

for(int i=0;i<a.size();i++)
{
for(int j=0;j<b.size();j++)
{
if(i==0&&j>0)
{
if(b[j]=='*'||a[i]==b[j])
dp[i][j]=1;
else 
dp[i][j]=dp[i][j-1];
}
else if(j==0)
{
if(b[j]=='*'||a[i]==b[j])
dp[i][j]=1;
else
dp[i][j]=0;
}
else if(b[j]=='*')
dp[i][j]=max(1+dp[i-1][j-1],1+dp[i-1][j]);

else if(b[j]=='?')
dp[i][j]=1+dp[i-1][j];

else 
{
if(a[i]==b[j])
dp[i][j]=1+dp[i-1][j-1];
else
dp[i][j]=dp[i-1][j];
}

}
}

return dp[a.size()-1][b.size()-1];
}
int main()
{
    char str[] = "baaabccabp";
    char pattern[] = "*****ba*****ab*";
    cout<<strmatch(str, pattern)<<endl;
    if (strmatch(str, pattern))
        cout <<    "Yes" << endl;
    else
        cout << "No" << endl;
 
    return 0;
}

