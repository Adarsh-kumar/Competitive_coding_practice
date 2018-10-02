bool is_safe(int i,int j,int m,int n)
{
if((i>=0 && i<m )&&( j>=0 && j<n))
return 1;
else
return 0;
}


map<pair<int ,int> ,bool > my_map;

double dfs(vector<string> &C,int i,int j)
{
double prob=0.0;

if(!is_safe(i,j,C.size(),C[0].size()))
return 0.0;

else if(C[i][j]=='X')
return 0.0;

else if(C[i][j]=='C'&&my_map.find(make_pair(i,j))==my_map.end())
{
my_map[make_pair(i,j)]=1;
return 1.0;
}
else 
{
    prob+=dfs(C,i+1,j)*0.25+dfs(C,i,j+1)*0.25+dfs(C,i,j-1)*0.25+dfs(C,i-1,j)*0.25;
    return prob;
}

}


vector<int> Solution::solve(int A, int B, vector<string> &C) {
    
    vector<int> ans;
    int rec=0;
    for(int i=0;i<B;i++)
    {
        if(C[0][i]=='.')
         rec++;
    }
    
    double prob=double(1)/rec;
    
    map<pair<int,int> ,int> prob_ans;
    
    for(int i=0;i<B;i++)
    {
        if(C[0][i]=='.')
        {
         my_map.clear();
         double temp=prob*dfs(C,0,i);
         cout<<temp<<endl;
         auto it=my_map.begin();
        /* while(temp!=0.0)
         {
            prob_ans[make_pair(it->first.first,it->first.second)]+=temp;
            it++;
            temp=prob*dfs(C,0,i);
            
         }*/
        }
    }
    
    vector<int > ap;
    for(auto it=prob_ans.begin();it!=prob_ans.end();it++)
    ap.push_back(it->second*100000);
    
    return ap;
}

