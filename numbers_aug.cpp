#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool is_valid(long long a)
{
if(a<1)
return 0;
for(int i=0;i<32;i++)
{
for(int j=0;j<32;j++)
{
if((pow(2,i)+pow(2,j))==a && (i!=j) )
return 1;
}
}
return 0;
}

int min_steps(long long a)
{
queue<int> q;
vector<int> visited;

q.push(a);
int count=0;
while(!q.empty())
{
int size=q.size();
while(size--)
{
int v=q.front();
q.pop();

if(std::find(visited.begin(),visited.end(),v)==visited.end())
{
visited.push_back(v);
if(is_valid(v))
return count;
else
{
q.push(v+1);
q.push(v-1);
}
}
}
count++;
}
}


int main()
{
int t;
long long n;
cin>>t;
int ans;
while(t--)
{
cin>>n;
ans=min_steps(n);
cout<<ans<<endl;
}

return 0;
}



