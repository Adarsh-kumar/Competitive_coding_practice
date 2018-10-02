#include <bits/stdc++.h>

#define mod 1000000009
using namespace std;

bool check_palin(string s ,int start ,int end)
{
int size=(end-start)+1;
if(size%2==0)
{
for(int i=start;i<= end;i++)
{
if(s[i]!=s[start])
return 0;
}
}
else
{
int mid=start+(end-start)/2;
int i=mid-1;
int j=mid+1;
while(i>=start&&j<=end)
{
if(s[i]!=s[j])
return 0;
i--;
j++;
}
}

return 1;
}



int main()
{
string s;
cin>>s;

int count=s.size();

for(int size=2;size<s.size();size++)
{
for(int i=0;i<=s.size()-size;i++)
{
count+=check_palin(s,i,i+size-1);
}
}

cout<<count<<endl;

return 0;
}

