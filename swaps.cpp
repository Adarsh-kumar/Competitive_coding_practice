#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
string visit;
for(int i=0;i<n;i++)
cin>>arr[i];

cin>>visit;
int temp;
for(int i=0;i<n-1;i++)
{
if(arr[i+1]>arr[i])
i++;
else if(arr[i+1]<arr[i]&&visit[i]=='1')
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
else if(arr[i+1]<arr[i]&&visit[i]=='0')
{
cout<<"No"<<endl;
return 0;
}
}

cout<<"Yes"<<endl;
return 0;
}

