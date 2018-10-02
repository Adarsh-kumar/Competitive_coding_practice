int dp[25][25];
int sum;

int top_down(vector<int> &arr,int i,int j)
{
    int current_sum=0;
    for(int k=i;k<=j;k++)
        current_sum+=arr[k];
    
if(dp[i][j]!=-1)
{
    return (dp[i][j]);
}
    if(i==j)
    {
        dp[i][j]=arr[i];
        return dp[i][j];
    }

    dp[i][j]=max(arr[i]+current_sum-top_down(arr,i+1,j),arr[j]+current_sum-top_down(arr,i,j-1));
    return (dp[i][j]);
}


class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        
        sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        memset(dp,-1,sizeof(dp));
        
        int ans=top_down(nums,0,nums.size()-1);
         
        int ans2=sum-ans;
        
        return(ans>=ans2);
    }
};
