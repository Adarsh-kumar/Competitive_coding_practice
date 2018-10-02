#include<bits/stdc++.h>
using namespace std;


vector<vector<int> > ans;

void get_all(int i,int n,vector<int> temp)
{

temp.push_back(i);
    
    if(i==1)
        temp.push_back(0);
    else
    {
    for(int j=i-1;j>=1;j--)
        get_all(j,n,temp);
    }
    
          if(i==n)
        temp.push_back(0);
    else
    {
      for(int j=i+1;j<=n;j++)
        get_all(j,n,temp);
    }
    
    ans.push_back(temp);
    
}

int main()
{
int n;
cin>>n;

 for(int i=1;i<=n;i++)
        {
        vector<int> temp;
        get_all(i,n,temp);
        }
        
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }

return 0;
}

