#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
string s;
cin>>s;
string s1="abcdefghijklmnopqrstuvwxyz";

int i=0;
int j=0;
int count=0;

while(i<s.size()&&j<26)
{
if(s[i]==s1[j]||(s[i]<s1[j]))
{
if(s[i]<s1[j])
s[i]=s1[j];
i++;
count++;
j++;
}
else
i++;
}

if(count==26)
cout<<s<<endl;


else
cout<<-1<<endl;

return 0;
}




