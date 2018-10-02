#include<bits/stdc++.h>
using namespace std;
int n,m,T,i,j,idx,ans,dp[5001][5001],parent[5001][5001],u[5001],v[5001],t[5001],x[5001];
int main()
{
    cin>>n>>m>>T;
    for(i=0;i<m;i++)
        cin>>u[i]>>v[i]>>t[i];
    memset(dp,64,sizeof dp);
    dp[1][1]=0;


    for(i=2;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(dp[i][v[j]]>dp[i-1][u[j]]+t[j])
            {
                dp[i][v[j]]=dp[i-1][u[j]]+t[j];
                parent[i][v[j]]=u[j];
            }
        }
        if(dp[i][n]<=T)
            ans=i;
    }

    cout<<ans<<endl;
    idx=n;
    for(i=ans;i>=1;i--)
    {
        x[i]=idx;
        idx=parent[i][idx];
    }
    for(i=1;i<=ans;i++)
        cout<<x[i]<<" ";
}
