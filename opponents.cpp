#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,d;

cin>>n>>d;
string arr[d];

for(int i=0;i<d;i++)
cin>>arr[i];

int l=0;
int r=0;

int ans=INT_MIN;

while(l<d)
{
while(r<d)
{
bool flag=0;

for(int i=0;i<arr[r].size();i++)
{
if(arr[r][i]=='0')
flag=1;
}

if(!flag)
break;

r++;
}

ans=max(ans,r-l);
r++;
l=r;
}

cout<<ans<<endl;

return 0;
}


