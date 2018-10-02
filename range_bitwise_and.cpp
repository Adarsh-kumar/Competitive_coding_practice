class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==0)
            return 0;
        
        if(m==n)
            return m;
        
        int l = log2(m) + 1;
        int r=log2(n) + 1;
        
        if(r>l)
            return 0;
        long long ans=0;
        
        while(r==l)
        {
            ans+=pow(2,l-1);
            m=m-pow(2,l-1);
            n=n-pow(2,l-1);    
        l = log2(m) + 1;
        r=log2(n) + 1;
        }
        return ans;
    }
};
