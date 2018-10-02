#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
int x,t;
}node;

bool comparator(node a,node b)
{
return (float(a.x)/a.temp>float(b.x)/b.temp);
}

int main()
{
int n,t;
cin>>n>>t;
node arr[n];
for(int i=0;i<n;i++)
cin>>arr[i].x;
for(int i=0;i<n;i++)
cin>>arr[i].temp;
sort(arr,arr+n,comparator);

//two pointer approach
int l=0,r=0;
int sum1=0;
int sum2=0;
int ans=0;
int x_max=0;

while(l<=r)
{
while(r<n&& float(sum1+(arr[r].x)*(arr[r].t)/sum2+arr[r].x)<=t)
{
sum1=sum1+(arr[r].x)*(arr[r].t);
sum2=sum2+arr[r].x;
ans=float(sum1+(arr[r].x)*(arr[r].t)/sum2+arr[r].x);
r++;
}
if(ans<t)
sum2+=float(t*ans2-ans1)/arr[r+1].t-1-t;
x_max=max(x_max,ans2);
sum2-=
return 0;
}

