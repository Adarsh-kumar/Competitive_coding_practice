#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;

int l=0;
int r=0;
int ans=INT_MIN;
int final_ans=INT_MAX;
string a="abcdefghijklmnopqrstuvwxyz";

for(int i=0;i<a.size();i++)
{
//ans=0;
l=0;
r=0;
ans=0;
while(l<s.size())
{
while(r<s.size()&&s[r]!=a[i])
{
r++;
}
ans=max(ans,r-l+1);
l=r+1;
r=l;
}
final_ans=min(final_ans,ans);
}

cout<<final_ans<<endl;
return 0;
}


