#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;

if(s.size()<=2)
{
if(s.size()==1)
cout<<1<<endl;
else
{
if(s[0]!=s[1])
cout<<2<<endl;
else
cout<<0<<endl;
}

return 0;
}


int l=0;
int r=1;

int size=s.size();

int ans=INT_MIN;

while(l<size)
{
r=l+1;
while(r<size&&s[r]!=s[r-1])
{
r++;
}
ans=max(ans,r-l);
l=r;
}

int ans2=0;

r=1;

while(r<size)
{
if(s[r]!=s[r-1])
r++;
else
break;
}

ans2=r;



r=size-1;

while(r>=1)
{
if(s[r]!=s[r-1])
r--;
else
break;
}

int ans3;

ans3=size-r;



if((ans2+ans3)<=size && (ans2+ans3)>ans)
cout<<(ans2+ans3);
else
cout<<ans;

return 0;
}


