int go_binary(int arr[],int n,int val)
{
int lo=0;
    int hi=n;

    while(lo<hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==val)
            return mid;
        else if(arr[mid]>val)
            hi=mid;
        else
            lo=mid+1;
    }
    
    if(lo==0)
    {
        if(abs(arr[1]-val)<abs(arr[0]-val))
            return 1;
        else
            return 0;
    }
    else if(lo==n-1)
    {
     if(abs(arr[n-1]-val)>abs(arr[n-2]-val))
         return n-2;
    
    else
        return n-1;
    }
    else
    {
        int temp1=arr[lo]-val;
        int temp2=arr[lo+1]-val;
        int temp3=arr[lo-1]-val;
        
        if(temp1<=temp2&&temp1<=temp3)
            return lo;
        else if(temp2<=temp1&&temp2<=temp3)
            return lo+1;
        else
            return lo-1;
    }
}



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int arr[(n*(n+1))/2];
        
        int k=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                arr[k]=nums[i]*nums[j];
                k++;
            }
        }
        
        int s=(n*(n+1))/2;
        
        int ans=INT_MAX;
        int final_ans;
        for(int i=0;i<n;i++)
        {
            int temp=go_binary(arr,s,target-nums[i]);
            if(arr[temp]==(target-nums[i]))
            return target;
            else
            {
                if((target-(nums[i]+arr[temp]))<ans)
                {
                final_ans=nums[i]+arr[temp];
                ans=min(ans,(target-(nums[i]+arr[temp])));
                }
            }
        }
        
        return final_ans;
        
        
    }
};
