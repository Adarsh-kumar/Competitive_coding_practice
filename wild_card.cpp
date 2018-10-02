#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
string s,t;
cin>>n>>m>>s>>t;
bool flag=1;
int i;

if(t.size()<s.size()-1)
{
flag=0;
}
else
{
for( i=0;i<s.size();i++)
{

if(i<t.size())
{
if(s[i]=='*')
break;
if(s[i]!=t[i])
{
flag=0;
break;
}

}
else
{
flag=0;
break;
}

}

if(flag)
{
int temp_size=s.size()-(i+1);

flag=(s.substr(i+1,temp_size)==t.substr(t.size()-temp_size,temp_size));
}

}
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;}





