class Solution {
public:
    int nthUglyNumber(int n) {
        
        long long  dp[n+1];
       if(n<=2)
            return n;
        
         dp[1]=1;
        dp[0]=1;
        dp[2]=2;
        
        
        
        
        for(int i=3;i<=n;i++)
        {
            dp[i]=1000000000000;
            
        for(int j=i-1;j>=1;j--)
        {
            long long  temp=dp[j]*2;
            long long  temp2=dp[j]*3;
            long long  temp3=dp[j]*5;
            
            if(temp>dp[i-1])
                dp[i]=min(dp[i],temp);
            
            else if(temp2>dp[i-1])
                dp[i]=min(dp[i],temp2);
            else if(temp3>dp[i-1])
                dp[i]=min(dp[i],temp3);
            }
            
        }
        
        
        return dp[n];
    }
};
