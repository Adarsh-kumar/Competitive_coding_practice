#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
int data;
int time;
}node;

bool comparator(node a,node b)
{
return(a.data<b.data);
}

int main()
{
int n,t;
cin>>n>>t;
node arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].data>>arr[i].time;
arr[i].data=i/arr[i].data;
}

sort(arr,arr+n,comparator);
int k1=n/2;
int k2=k1+1;

float r1=float(x1)/k1;


while(arr[k1].data>=r1)
{
k1;
r1=float(x1)/k1;
}
if(k1==n-1)
{
cout<<"No"<<endl;
return 0;
}

k2=k1+1;
float r2=float(x2)/(n-k2);
if(arr[k2].data<r2)
{
cout<<"No"<<endl;
return 0;
}

while(arr[k2+1].data>=r2)
{
k2++;
r2=float(x2)/(n-k2);
}

cout<<k1<<" "<<k2<<endl;

for(int i=0;i<=k1;i++)
{
cout<<arr[i].index+1<<" ";
}

cout<<endl;

for(int j=k2;j<n;j++)
{
cout<<arr[j].index+1<<endl;
}

return 0;
}


