#include<iostream>
#include<vector>
#include<string>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int A, int B, int C, int D) {
    queue<int> q;
    q.push(A);
    set<int> visited;
    visited.insert(A);
    vector<int> ans;
    int cnt=0;
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        if(cnt<D)
        {
            cnt++;
            ans.push_back(a);
            if(visited.find(min(a*a,a*B))==visited.end())
            q.push(min(a*a,a*B));
              if(visited.find(min(a*a,a*C))==visited.end())
            q.push(min(a*a,a*B));
            
        }
    }
    return (ans);
}






int main()
{
 //generate_numbers();
    //cout<<vec.size()<<" ";  
vector<int> ans=solve(2,5,11,3);
cout<<ans[0];
return 0;
}


