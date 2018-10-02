#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
string s;
cin>>n>>s;
int flag=1;
if(n<=2)
{
if(n==1)
flag=(s[0]=='1');
else
flag=!(s[0]==s[1]);
}
else
{
for(int i=0;i<n;i++)
{
if(s[i]=='1')
{
if(i+1<n&&s[i+1]=='1')
{
flag=0;
break;
}
}

else if(s[i]=='0')
{
if(i+2<n&&(s[i+1]=='0'&&s[i+2]=='0'))
{
flag=0;
break;
}
else if(i+2==n&&(s[i+1]=='0'))
{
flag=0;
break;
}
}
}
}
if(flag)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;

return 0;
}


