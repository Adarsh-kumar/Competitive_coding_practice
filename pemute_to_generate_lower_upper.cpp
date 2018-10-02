
char cap(char c)
{
    if(65<=c&&c<=90)
        return c;
    else
        return (c-32);
}

char lower(char c)
{
    if(97<=c&&c<=122)
        return c;
    else
        return (c+32);
}

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        int count=0;
        vector<string> ans;
        for(int i=0;i<S.size();i++)
        {
            if('A'<=S[i]&&S[i]<='z')
                count++;
        }
        int k=0;
        for(int i=0;i<pow(2,count);i++)
        {
            string s;
            k=0;
            for(int j=0;j<S.size();j++)
            {
                if('A'<=S[j]&&S[j]<='z')
                {
                    if(i&(1<<k))
                        s+=cap(S[j]);
                    else
                        s+=lower(S[j]);
                    k++;
                }
                else
                    s+=S[j];
            }
            ans.push_back(s);
        }
        return ans;
    }
};
