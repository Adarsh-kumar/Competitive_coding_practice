class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int size1=word1.size();
        int size2=word2.size();
        
        
        
        
        if(size1==0||size2==0)
            return max(size1,size2);
        
        int dp[size1+1][size2+1];
        
        
        memset(dp,0,sizeof(dp));
        
        for(int j=0;j<=size2;j++)
            dp[0][j]=j;
        
        for(int j=0;j<=size1;j++)
            dp[j][0]=j;
        
        for(int i=1;i<=size1;i++)
        {
            for(int j=1;j<=size2;j++)
            {
               
                    if(word1[i-1]==word2[j-1])
                        dp[i][j]=dp[i-1][j-1];
                    else
                        dp[i][j]=1+min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]);
                }
            }
        
        return dp[size1][size2];
        
    }
};
