#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
map<int,int> my_map;
bool flag=0;
int ans=0;
for(int i=0;i<n;i++)
{
int temp;
int cur;
cin>>temp;
cur=my_map[temp]++;
cur++;
if(cur==4)
{
flag=1;
ans=temp;
}

}

if(flag)
cout<<ans<<" "<<ans<<" "<<ans<<" "<<ans;
else
{
int count=0;

for(map<int,int>::iterator it=my_map.begin();it!=my_map.end();it++)
{
if(count==2)
break;

if(it->second>=2)
{
if(it->second>=4)
{
for(int i=0;i<4;i++)
cout<<it->first<<" ";
break;
}
cout<<it->first<<" "<<it->first<<" ";
count++;
}



}
}
cout<<endl;
}

return 0;
}

