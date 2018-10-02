#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
string s;
cin>>s;

int prev=s.size();

int ans=INT_MIN;

for(int i=s.size()-1;i>=0;i--)
{
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
{
ans=max(ans,prev-i);
prev=i;
}
else if(i==0)
ans=max(ans,(prev-i)+1);
}

cout<<ans<<endl;
return 0;
}
