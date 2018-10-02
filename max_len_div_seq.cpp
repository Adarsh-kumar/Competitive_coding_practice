#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int dp[n][1001];
	    memset(dp,0,sizeof(dp));
	   
	   for(int i=0;i<n;i++)
	    {
	    for(int j=arr[i];j<=1000;j++)
	    {
	        int temp=-1;
	        for(int k=i-1;k>=0;k--)
	        {
	            
	            if(j%arr[k]==0||arr[k]%j==0)
	            {
	                int mx=max(arr[k],j);
	                temp=1+dp[k][mx];
	            }
	        }
	        if(temp==-1)
	        temp=1;
	        else
	        dp[i][j]=max(temp,dp[i-1][j]);
	    }
	    }
	    int ans=INT_MIN;
	    
	   ans=dp[n-1][arr[n-1]];
	    cout<<ans<<endl;
	}
	return 0;
}

