#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>t;

while(t--)
{
cin>>n;
map<int,int> even_map;
map<int,int> odd_map;

for(int i=0;i<n;i++)
{
long long temp;
cin>>temp;
if(temp%2==0)
even_map[temp]++;
else
odd_map[temp]++;
}

long long ans=0;

long long total=0;

map<int,int>::iterator it;

for(it=even_map.begin();it!=even_map.end();it++)
{
total+=it->second;
}

for(it=even_map.begin();it!=even_map.end();it++)
{
long long temp=it->first;
int current_total=total-it->second;
if(even_map.find(temp^2)!=even_map.end())
current_total-=even_map[temp^2];
ans+=current_total*(it->second);
}

total=0;

for(it=odd_map.begin();it!=odd_map.end();it++)
{
total+=it->second;
}

for(it=odd_map.begin();it!=odd_map.end();it++)
{
long long temp=it->first;
int current_total=total-it->second;
if(odd_map.find(temp^2)!=odd_map.end())
current_total-=odd_map[temp^2];
ans+=current_total*(it->second);
}

cout<<ans/2<<endl;

}

return 0;
}

