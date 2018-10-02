#include <bits/stdc++.h>

using namespace std;

struct Compare {
     bool operator()(pair<int, int> const & a,
                              pair<int, int> const & b) 
    { 
        if(a.first<b.first)
        return a.first < b.first; 
        else
            return a.second>b.second;
        
}
};

int main()
{
priority_queue<pair<int ,int> ,vector<pair<int,int > > ,Compare > q;

q.push(make_pair(2,3));
q.push(make_pair(4,2));
q.push(make_pair(2,2));

while(!q.empty())
{
cout<<q.top().first<<" "<<q.top().second<<" ";
q.pop();
}

return 0;}

