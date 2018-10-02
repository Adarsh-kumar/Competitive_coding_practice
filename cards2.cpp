#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main() 
{

int n,m;
cin>>n>>m;

string ans;
bool flag=1;

if(m>3*n)
{
cout<<-1<<endl;
return 0;
}

if(n>2*m)
{
cout<<-1<<endl;
return 0;
}


if(m<=n)
{
string t="";
while(n>0)
{
t+="0";
n--;
if(m>0)
t+="1";
m--;
}
cout<<t<<endl;

return 0;}


while(m>0)
{

if(m>=2)
{
ans+="11";
m-=2;
}

else
{
ans+="1";
m-=1;
}

if(n<=0&&m>0)
{
flag=0;
break;
}

if(n!=0)
ans+="0";

n--;
}

if(m==0&&n>1)
flag=0;

if(m==0&&n==1)
ans+="0";

if(flag)
cout<<ans<<endl;

else
cout<<-1<<endl;

return 0;
}


