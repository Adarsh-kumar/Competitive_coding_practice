#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char nth_letter(int n)
{
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return (s[n]);
}

int main()
{
string s;
cin>>s;
int size=s.size();
bool arr[26];
for(int i=0;i<26;i++)
arr[i]=0;
int i=0,j=0;
if(size<26 || size >26)
{
cout<<-1<<endl;
return 0;
}
else
{
for(int i=0;i<size;i++)
{
arr[s[i]-65]=1;
if(s[i]=='?')
{
if(j>26)
return -1;
while(arr[j]!=0)
j++;
arr[j]=1;
s[i]=nth_letter(j);
j++;
}
}
}
cout<<s<<endl;
return 0;
}

