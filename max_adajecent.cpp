int Solution::adjacent(vector<vector<int> > &A) {
    int size=A.size();
    if(size==0)
    return 0;
    int size2=A[0].size();
    int dp[size][size2];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(i==0&&j==0)
            dp[i][j]=A[i][j];
            else if(i==0)
            {
            if(j-2<0)
            dp[i][j]=max(A[i][j-1],A[i][j]);
            else
            dp[i][j]=max(dp[i][j-2]+A[i][j],dp[i][j-1]);
            }
            else if(j==0)
            {
            if(i-2<0)
            dp[i][j]=max(A[i-1][j],A[i][j]);
            else
            dp[i][j]=max(dp[i-2][j]+A[i][j],dp[i-1][j]);
            }
            else
            {
                if(j>1)
                dp[i][j]=max(A[i][j]+dp[i][j-2],max(max(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]));
                else
                dp[i][j]=max(A[i][j],max(max(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]));
            }
            
        }
    }
    return(dp[size-1][size2-1]);
}

