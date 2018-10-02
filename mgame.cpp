#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n>>m;

priority_queue<int,vector<int>,std::greater<int> > p;
int d,c;
char arr[n][m];


for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
if(arr[i][j]=='S')
d=j;
else if(arr[i][j]=='G')
c=G;
}
p.push(d-c-1);
}

while(!p.isempty())
{
if(!p.isempty()&&p.top==0)
{



