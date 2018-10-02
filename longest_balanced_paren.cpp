class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> st;
        int ans=INT_MIN;
        st.push(-1);
        
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else  
            {
               
                    st.pop();
                    if(st.empty())
                        st.push(i);
                    else
                    {
                    int temp=st.top();
                    ans=max(i-temp,ans);
                    }
                
            }
        }
        if(ans==INT_MIN)
            ans=0;
        return ans;
        
    }
};
