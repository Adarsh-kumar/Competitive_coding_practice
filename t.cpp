#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    string s;
    cin>>s;
    int size=s.size();
    
    int dp[size][size];
    
    for(int i=0;i<size;i++)
    dp[i][i]=1;
    
    for(int l=2;l<=size;l++)
    {
    for(int i=0;i<=size-l;i++)
    {
    int j=i+l-1;
    
    if(s[i]==s[j])
    {
    dp[i][j]=2+dp[i+1][j-1];
    if(dp[i][j]!=(j-i)+1)
    {
    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
    }
}
    else
    dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
    }
    
}


cout<<dp[0][size-1]<<endl;
}

return 0;
}

