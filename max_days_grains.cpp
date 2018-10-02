#include<bits/stdc++.h>
using namespace std;
#define hell 1000000007

int main()
{
string s;
cin>>s;

int size=s.size();


int dp[size][size];

for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
dp[i][j]=0;
}
}



int count=0;

for(int l=2;l<size;l+=2)
{
for(int i=0;i<=size-l;i++)
{
int j=i+l-1;

if(s[i]=='(' && s[j]==')' &&l==2)
{
count++;
dp[i][j]=2;
}
else if(s[i]=='(' && s[j]==')')
{
dp[i][j]=2+dp[i+1][j-1];
count++;
}
else
{
dp[i][j]=max(dp[i+1][j],dp[i][j-1]);

}

}
}



cout<<count%hell<<endl;

return 0;
}


