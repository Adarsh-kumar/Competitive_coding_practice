#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
int t,n,s,y;
cin>>t>>n>>s>>y;
int velocity[n];
int direction[n];
int position[n];
int car_length[n];

while(t)
{
cin>>n>>s>>y;
for(int i=0;i<n;i++)
cin>>velocity[i];
for(int i=0;i<n;i++)
cin>>direction[i];
for(int i=0;i<n;i++)
cin>>direction[i];
for(int i=0;i<n;i++)
cin>>position[i];
for(int i=0;i<n;i++)
cin>>car_length[i];

float time;

for(int i=1;i<n;i++)
{
if(position[i]>0&&direction[i]==0)
{
position[i]-=velocity[i]*(i*float(y)/s);
}
if(position[i]<0&&direction[i]==1)
{
position[i]+=velocity[i]*(i*float(y)/s);
}
}
//fully implementation 
for(int i=0;i<n;i++)
{
if(position[i]>0&&direction[i]==0||position[i]<0&&direction[i]==1)
{
if(float(abs(position[i])+car_length[i])/velocity[i]>=float(y)/s)
time+=float(y)/s;
else
{
time+=float(abs(position[i])+car_length[i])/velocity[i]+float(y)/s;
for(int j=i+1;j<n;j++)
{
if(position[j]>0&&velocity[i]==0)
position[j]-=velocity[j]*(float(abs(position[i])+car_length[i]))/velocity[i]);
else if(position[j]<0&&velocity[i]==1)
position[j]+=velocity[j]*(float(abs(position[i])+car_length[i]))/velocity[i]);
}
}
}
}

cout<<time;
t--;
}
return 0;
}

