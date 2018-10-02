#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[100];

int main()
{
int n,k;
cin>>n>>k;
string s;
cin>>s;

for(int i=0;i<100;i++)
arr[i]=0;
int max_index=0;

for(int i=0;i<s.size();i++)
{
max_index=max(max_index,s[i]-97);
arr[s[i]-97]=1;
}

int weight=0;
int i=0;
int count=k;
bool flag=1;

while(count)
{
if(i<=max_index)
{
if(arr[i]==1)
{
weight+=(i+1);
i=i+2;
count--;
}
else
i=i+1;
}
else
{
flag=0;
break;
}
}
if(flag)
cout<<weight<<endl;
else
cout<<-1<<endl;
return 0;
}

