#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t,n;
int ans=INT_MAX;
cin>>t;
while(t--)
{
cin>>n;
int arr[n];
map<int ,int > my_map;
for(int i=0;i<n;i++)
{
cin>>arr[i];
if(my_map.find(arr[i])==my_map.end())
{
my_map[arr[i]]=i+1;
}
else
{
ans=min(my_map.find(arr[i])->second,ans);
}
}
cout<<ans<<endl;
}
return 0;
}


