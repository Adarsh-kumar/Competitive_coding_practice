#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int position1=1;
int position2=1000000;
int i=0;
int time=0;
while(i<n)
{
if(position2<=arr[i])
break;
else if(arr[i]-position1<=position2-arr[i])
{
time+=arr[i]-position1;
position2-=arr[i]-position1;
position1=arr[i];
}
else
{
time+=position2-arr[i];
position1+=position2-arr[i];
position2=arr[i];
}
i++;
}
cout<<time<<endl;
return 0;
}



