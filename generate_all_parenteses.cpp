
vector<string> ans;

void generate_all(int n,int pos,int open ,int close,string s)
{
    if(pos==2*n)
    {
        ans.push_back(s);
    }
    else
    {
        if(close<open)
        {
            string temp=s+')';
            generate_all(n,pos+1,open,close+1,temp);
        }
        if(open<n)
        {
            string temp=s+'(';
            generate_all(n,pos+1,open+1,close,temp);
        }
    }
}



class Solution {
public:
    vector<string> generateParenthesis(int n) {
        ans.clear();
        if(n>0)
        {
            string s="";
            generate_all(n,0,0,0,s);
        }
        return ans;
    }
};
