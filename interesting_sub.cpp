#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t,k;
string s;
cin>>t;
while(t--)
{
cin>>s>>k;
int l=0;
int n=s.size();
int r=0;
int d_count=0;
int ans=0;
map<char,int> my_map;
while(l<n)
{
r=l;
my_map.clear();
d_count=0;
while(r<n)
{
if(my_map[s[r]]==0)
d_count++;

my_map[s[r]]++;

if(d_count>=k&&((r-l)+1)%d_count==0)
{
//cout<<(r-l)+1<<endl;
ans++;
}
r++;
}
my_map[s[l]]--;
l++;
}
if(k==0)
cout<<ans+1<<endl;
else
cout<<ans<<endl;

}
return 0;
}



