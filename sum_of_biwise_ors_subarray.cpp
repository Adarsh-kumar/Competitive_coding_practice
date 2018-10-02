class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        set<int> ans;
        set<int> current;
        
        current.insert(0);
        
        for(int x:A)
        {
            set<int> curr2;
            for(int y:current)
            curr2.insert(x|y);
            
            curr2.insert(x);
            
            current=curr2;
            ans.insert(current.begin(),current.end());
            
        }
        
        return ans.size();
    }
};
