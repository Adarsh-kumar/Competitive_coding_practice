class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==0)
            return 0;
        
        /*map<int,int> my_map;
        
        for(int i=0;i<nums.size();i++)
            my_map[nums[i]]++;
        
        vector<int> arr;
        
        for(auto it=my_map.begin();it!=my_map.end();it++)
            arr.push_back(it->second);*/
        
        sort(nums.begin(),nums.end());
        
        int dp[n];
        
        for(int i=0;i<n;i++)
        {
            if(i==0)
                dp[i]=nums[0];
            else 
            {
                int index=i-1;
             while(nums[i]-nums[index]==1)
                 index--;
                
                if(index>=0)
                dp[i]=max(nums[i]+dp[index],dp[i-1]);
                    else 
                        dp[i]=max(nums[i],dp[i-1]);
            }
        }
        
        return dp[n-1];
        
    }
};
