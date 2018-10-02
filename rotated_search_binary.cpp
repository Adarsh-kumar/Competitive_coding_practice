class Solution {
public:
    int findMin(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
       // if(nums.size()<3)
         //   return(min(nums[0],nums[1]));
        
        int lo=0;
        int hi=nums.size();
        
        while(lo<hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=nums[0])
                lo=mid+1;
            else 
                hi=mid;
        }
        if(lo==nums.size())
            lo=0;
        return (nums[lo]);
        
    }
};
