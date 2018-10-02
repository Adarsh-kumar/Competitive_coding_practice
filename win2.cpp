#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,vector<int> > a ,pair<int,vector<int> > b)
{
return (a.second<b.second);
}


bool check_it(vector<int> a,vector<int> b)
{
map<int,int> temp_map1;
map<int,int> temp_map2;

for(int i=0;i<a.size();i++)
temp_map1[a[i]]++;


for(int i=0;i<b.size();i++)
temp_map2[b[i]]++;

for(auto it=temp_map2.begin();it!=temp_map2.end();it++)
{
if(temp_map1.find(it->first)==temp_map1.end()||temp_map1[it->first]<temp_map2[it->first])
return 0;
}

return 1;
}

bool is_equal(pair<int,vector<int> > a,pair<int,vector<int> > b)
{
for(int i=0;i<a.second.size();i++)
{
if(a.second[i]!=b.second[i])
return 0;
}
return 1;
}

int main()
{
int n;

cin>>n;

vector<pair<int,vector<int> > >arr;

for(int i=0;i<n;i++)
{

vector<int> temp;

int m;
cin>>m;

for(int j=0;j<m;j++)
{
int u;
cin>>u;

temp.push_back(u);
}
sort(temp.begin(),temp.end());
arr.push_back(make_pair(i,temp));

}

sort(arr.begin(),arr.end(),comp);

bool ans[n]={false};

if(check_it(arr[0].second,arr[1].second))
ans[arr[0].first]=1;

for(int i=1;i<n;i++)
{

if(is_equal(arr[i-1],arr[i])||(i==n-1&&check_it(arr[i].second,arr[i+1].second)))
ans[arr[i].first]=1;
}

for(int i=0;i<n;i++)
{
if(ans[i])
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}


return 0;
}


