#include<bits/stdc++.h>
using namespace std;

int seive[100005];

bool is_safe(int i,int j,int n,int m)
	{
	    if(i>=0&&i<n&&j>=0&&j<m)
	    return 1;
	    else
	    return 0;
	}

int main()
{
	
	for(int i=2; i<=100000; i++)
	{
		if(!seive[i])
			for(int j=2*i; j<=100000; j+=i)
				seive[j]=1;
	}
	
	int n,m;
	cin>>n>>m;
	
	int arr[n][m];
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	
	int dp[n][m];
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        if(i==0&&j==0)
	        {
	            dp[i][j]=1;
	        }
	        else if(i==0)
	        {
	            if(seive[arr[i][j]]==1)
	            dp[i][j]=0;
	            else
	            dp[i][j]=dp[i][j-1];
	            
	        }
	        else if(j==0)
	        {
	            if(seive[arr[i][j]]==1)
	            dp[i][j]=0;
	            else
	            dp[i][j]=dp[i-1][j];
	        }
	        else
	        {
	             if(seive[arr[i][j]]==1)
	            dp[i][j]=0;
	            else
	            dp[i][j]=dp[i][j-1]+dp[i-1][j-1]+dp[i-1][j];
	        }
	    }
	}
	
	cout<<dp[n-1][m-1]<<endl;
	
	stack<pair<int ,int > > st;
	int i=n-1;
	int j=m-1;
	
	st.push(make_pair(i,j));
	
	while(i!=0&&j!=0)
	{
	    if(is_safe(i-1,j-1,n,m)&&seive[arr[i-1][j-1]]!=1)
	    {
	        st.push(make_pair(i-1,j-1));
	        i=i-1;
	        j=j-1;
	    }
	    
	    else if(is_safe(i,j-1,n,m)&&seive[arr[i][j-1]]!=1)
	    {
	    st.push(make_pair(i,j-1));
	    j=j-1;
	    }
	   
	    else if(is_safe(i-1,j,n,m)&&seive[arr[i-1][j]]!=1)
	    {
	        st.push(make_pair(i-1,j));
	        i=i-1;
	    }
	}
	
	st.push(make_pair(0,0));
	
	while(!st.empty())
	{
	    pair<int ,int > tp;
	    tp=st.top();
	    cout<<tp.first+1<<" "<<tp.second+1<<endl;
	    st.pop();
	}
	
	
	return 0;
	
}

