#include<bits/stdc++.h>
using namespace std;

bool palin(string s)
{
int size=s.size();
int l,r;
if(size%2==0)
{
l=size/2-1;
r=size/2;
}
else
{
l=size/2-1;
r=size/2+1;
}

while(l>=0&&r<size)
{
if(s[l]==s[r])
{
l--;
r++;
}
else
return 0;
}

int count=0;

for(int i=0;i<size;i++)
{
if(s[i]==s[0])
count++;
}

if(count==size)
return 2;

return 1;
}

int main()
{
int n,k;
cin>>n>>k;
string s;

cin>>s;

int count=0;
int size=s.size();





