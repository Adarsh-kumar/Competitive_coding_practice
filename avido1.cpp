#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool is_palindrome(string s)
{
int size=s.size();
int l,r;
bool flag=1;
if(size%2==0)
{
r=size/2;
l=size/2 -1;
}
else
{
r=size/2+1;
l=size/2-1;
}

while(l>=0&&r<=s.size()-1)
{
if(s[l]==s[r])
{
l--;
r++;
}
else
{
flag=0;
break;
}
}

return (flag);
}

bool same_character(string s)
{
for(int i=0;i<s.size();i++)
{
if(s[i]!=s[0])
return 0;
}
return 1;
}

int main()
{
string s;
cin>>s;

if(!is_palindrome(s))
cout<<s.size()<<endl;

else
{
if(same_character(s))
cout<<0<<endl;
else
cout<<s.size()-1<<endl;
}

return 0;
}


