#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
char s[n];
for(int i=0;i<n;i++)
cin>>s[i];

for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
for(
