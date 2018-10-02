#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{
int n;
cin>>n;
string temp;
cin>>temp;
int l=0;
int r=0;
int count=0;
int ans=0;
while(l<temp.size())
{
while(r<temp.size()&&(r-l)<3)
{
if(temp[r]=='x')
count++;
r++;
}
if(count==3)
ans++;
if(temp[l]=='x')
count--;
l++;
}

cout<<ans<<endl;
return 0;
}

