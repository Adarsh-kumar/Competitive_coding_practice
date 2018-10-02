#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
unordered_map<int,int> my_map;

int temp;

for(int i=0;i<n;i++)
{
cin>>temp;
my_map[temp]++;
}

vector<int> arr;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
arr.push_back(it->second);
}

long long ans=0;

for(int i=0;i<arr.size();i++)
{
for(int j=i+1;j<arr.size();j++)
{
ans+=(arr[i]*arr[j]);
}
}

cout<<ans<<endl;

return 0;
}



