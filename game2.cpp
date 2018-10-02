#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int arr[14];
int n=14;
for(int i=0;i<n;i++)
cin>>arr[i];

int ans=0;
int final_ans=0;
int temp;

for(int i=0;i<n;i++)
{
if(arr[i]!=0)
{
int j=i+1;
ans=0;
temp=arr[i];
while(temp--)
{
if(j<n)
{
if(arr[j]!=0)
ans+=arr[j]+1;
j++;
}
else
{
j=0;
if(arr[j]!=0)
ans+=arr[j]+1;
j++;
}
}
final_ans=max(ans,final_ans);
}
}

cout<<final_ans<<endl;
return 0;
}



