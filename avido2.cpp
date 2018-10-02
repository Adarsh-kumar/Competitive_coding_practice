#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
long long key,value;

map<long long ,long long> my_map;

cin>>n;

long long ans=0;
for(int i=0;i<n;i++)
{
cin>>key>>value;
my_map[key]=value;
//if(my_map[key]==0)
ans+=value;
//else
//ans+=max(my_map[key],value);
}

cin>>m;

for(int i=0;i<m;i++)
{
cin>>key>>value;
if(my_map[key]==0)
ans+=value;
else
{
if(my_map[key]<value)
{
ans-=my_map[key];
ans+=max(my_map[key],value);
}
}
}
cout<<ans<<endl;

return 0;
}

