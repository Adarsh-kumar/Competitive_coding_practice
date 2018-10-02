#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int main() 
{

int n,k;
cin>>n>>k;

int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int l=0;
int r=0;

map<int,int> my_map;

int ans=INT_MAX;

int temp1,temp2;

my_map.clear();
int count=0;

while(l<n)
{
while(r<n&&(count<k))
{
if(my_map.find(arr[r])==my_map.end())
count++;
my_map[arr[r]]++;
r++;
}

if(count==k&&(r-l)<ans)
{
if(ans==INT_MAX)
{
temp1=l+1;
temp2=r;
}
else if(l+1>=temp1&&r<=temp2)
{
temp1=l+1;
temp2=r;
}
ans=min((r-l),ans);
}


if(my_map[arr[l]]==1)
{
auto it=my_map.find(arr[l]);
my_map.erase(it);
count--;
}

else
{
my_map[arr[l]]--;
}


l++;
}

if(ans!=INT_MAX)
cout<<temp1<<" "<<temp2<<endl;
else
cout<<-1<<" "<<-1<<endl;

return 0;
}

