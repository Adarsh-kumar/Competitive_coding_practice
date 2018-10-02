#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef struct node
{
int time,l_time;
}node;

int main()
{
int t,n;
cin>>t;

while(t--)
{
cin>>n;
node arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].time>>arr[i].l_time;
}

int wait_time=0;
int next_time=arr[0].time;
for(int i=0;i<n;i++)
{
if(arr[i].l_time>=next_time)
{
cout<<next_time<<" ";
if(next_time<=arr[i].time)
next_time=arr[i].time+1;
else
next_time=next_time+1;
}
else
cout<<0<<" ";
}

cout<<endl;
}

return 0;
}


