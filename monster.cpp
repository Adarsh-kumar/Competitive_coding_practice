#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
string s;
cin>>s;
int o_count;
int c_count;
int n_count;
int ans=0;
for(int i=0;i<s.size();i++)
{
o_count=0;
c_count=0;
n_count=0;
for(int j=i;j<s.size();j++)
{
if(s[j]=='(')
o_count++;
else if(s[j]==')')
c_count++;
else if(s[j]=='?')
n_count++;
if(o_count==c_count)
ans++;

