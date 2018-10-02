
int dp[25][1005];

int top_down(vector<int> &arr,int i,int j)
{
    if(j>1000)
     {
        return 0;
    }
    if(dp[i][j]!=-1)
        return (dp[i][j]);
    
    if(i==0)
    {
        if(arr[i]==j)
        {
            if(j==0)
            dp[i][j]=2;
            else
                dp[i][j]=1;
            
            return dp[i][j];
        }
        else
        {
            dp[i][j]=0;
            return 0;
        }
    }

    dp[i][j]=top_down(arr,i-1,abs(j-arr[i]))+top_down(arr,i-1,abs(j+arr[i]));
    return (dp[i][j]);
    
}


class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int S) {
        
        int size=arr.size();
        
    
        
        memset(dp,-1,sizeof(dp));
    
        if(S>1000)
            return 0;
      return (top_down(arr,size-1,abs(S)));
        
    }
};
