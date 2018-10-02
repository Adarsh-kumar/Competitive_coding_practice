#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
char moves[n];
for(int i=0;i<n;i++)
cin>>moves[i];
int count=0;
for(int i=0;i<n;i++)
{
if(i+1<n&&moves[i]!=moves[i+1])
{
count++;
i++;
}
}
cout<<n-count<<endl;
}
return 0;
}
