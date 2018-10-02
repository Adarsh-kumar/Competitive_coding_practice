#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

map<int ,int> my_map;

int l=0;
int r=0;

int ans=INT_MIN;

int temp1,temp2;

int count=0;

while(l<n)
{

while(r<n&&count<=k)

{

for(auto it=my_map.begin();it!=my_map.end();it++)



if(my_map.find(arr[r])==my_map.end())
{

count++;
}


my_map[arr[r]]++;


cout<<count<<endl;
r++;

}


if((r-l)>ans)
{
temp1=l+1;
temp2=r;
}



ans=max(ans,(r-l));

auto s=my_map.find(arr[l]);
if(s->second==1)
{
my_map.erase(s);
count--;
}
else
my_map[s->second]--;
l++;
}

cout<<temp1<<" "<<temp2<<endl;
return 0;
}


