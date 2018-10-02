#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
long long x,y;
long long sum;
}node;

bool comp1(node a ,node b)
{
a.sum=a.x+a.y;
b.sum=b.x+b.y;
return a.sum<b.sum;
}

bool comp2(node a,node b)
{
return a.y<b.y;
}


int main()
{
int n;

cin>>n;

node arr[n];

for(int i=0;i<n;i++)
cin>>arr[i].x>>arr[i].y;

long long len1,len2;

long long len;


sort(arr,arr+n,comp1);

cout<<arr[n-1].x+arr[n-1].y;


return 0;
}

