class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int bits=log2(n)+1;
        
        int mask=0;
        bool flag;
        
        if(n&1)
            flag=1;
        else
            flag=0;
        bool ans=1;
        
        for(int i=1;i<=bits;i++)
        {
            if(flag)
            {
                if(n&(1<<i))
                {
                ans=0;
                    break;
                }
                else
                    flag=0;
            }
            else
            {
                 if(n&(1<<i))
                    flag=1;
                else
                {
                    ans=0;
                    break;
                }
            }
        }
        return ans;
    }
};
