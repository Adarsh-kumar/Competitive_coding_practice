class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        
        int area=min(height[0],height[n-1])*(n-1);
        
        while(l<r)
        {
            if(height[l]<=height[r])
                l++;
            else 
                r--;
            area=max(area,min(height[l],height[r])*(r-l));
                
        }
        
        return area;
        
    }
};
