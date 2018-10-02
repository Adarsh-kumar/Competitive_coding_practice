#include<iostream>

#include<bits/stdc++.h>

using namespace std;
string arr1[105];
string arr2[105];


int main()
{

int n;
cin>>n;

for(int i=0;i<n;i++)
cin>>arr1[i];
for(int i=0;i<n;i++)
cin>>arr2[i];

int ans=0;
int temp;

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(arr2[i].size()==arr1[j].size())
{
if(arr2[i][arr1[j].size()-1]!=arr1[j][arr1[j].size()-1])
ans+=1;
arr1[j]="XXXXXXX";
break;
}
}
}

cout<<ans<<endl;

return 0;
}







