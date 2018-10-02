class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        long long ans=0;
        
       int size=words.size();
    
        vector<int> v;
        
        for(int i=0;i<size;i++)
        {
            //bitmask creation and saving each bitmask in the vector
            int word=0;
            for(int j=0;j<words[i].size();j++)
                word|=(1 << (words[i][j]-'a') );
            
            v.push_back(word);
        }
        
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {

                
                 if ((v[j] & v[i]) == 0 && words[i].size() * words[j].size() > ans)
                    ans=words[i].size()*words[j].size();
                    
            }
        }
        
        return ans;
        
    }
};
