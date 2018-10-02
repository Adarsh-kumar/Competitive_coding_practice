#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int convert(string s,string t)
{
int count=0;
for(int i=0;i<s.size();i++)
{
if(s[i]!=t[i])
{
int dist=t[i]-s[i];
if(dist<0)
dist+=26;
while(dist>0)
{
if(dist>=13)
dist-=13;
else
dist-=1;
count++;
}
}
}
return count;
}






int main()
{
int n;
cin>>n;
string s,t;
cin>>s>>t;

cout<<convert(s,t)<<endl;
return 0;
}

