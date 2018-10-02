class Solution {
public:
    int wiggleMaxLength(vector<int>& arr) {
        
      
        
        
        int n=arr.size();
        if(n<=1)
            return n;
        
        int dp[n][2];
        
        dp[0][0]=1;
        dp[0][1]=1;
        
        int dp2[n];
        
        dp2[0]=1;
        
        for(int i=1;i<n;i++)
        {
        dp[i][0]=1;
            
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
                dp[i][0]=max(dp[i][0],1+dp[j][1]);
        }
            dp[i][1]=1;
            
            for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<arr[i])
                dp[i][1]=max(dp[i][1],1+dp[j][0]);
        }
         dp2[i]=max(max(dp[i][0],dp[i][1]),dp2[i-1]);
        }
        
    return dp2[n-1];
            }
        
};
