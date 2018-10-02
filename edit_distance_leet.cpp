class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int size1=word1.size();
        int size2=word2.size();
        
        
        
        
        if(size1==0||size2==0)
            return max(size1,size2);
        
        int dp[size1][size2];
        
        
        memset(dp,1,sizeof(dp));
        
        
        for(int i=0;i<size1;i++)
        {
            for(int j=0;j<size2;j++)
            {
                if(i==0&&j==0)
                {
                    if(word1[i]!=word2[j])
                        dp[i][j]=1;
                    else
                        dp[i][j]=0;
                }
                else if(i==0)
                {
                     if(word1[i]==word2[j])
                        dp[i][j]=j;
                    else
                        dp[i][j]=1+dp[i][j-1];
                }
                else if(j==0)
                {
                    if(word1[i]==word2[j])
                        dp[i][j]=i;
                    else
                        dp[i][j]=1+dp[i-1][j];
                }
                else
                {
                    if(word1[i]==word2[j])
                        dp[i][j]=dp[i-1][j-1];
                    else
                        dp[i][j]=1+min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]);
                }
            }
        }
        
        return dp[size1-1][size2-1];
        
    }
};
