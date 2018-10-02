#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
long long x,y;

}node;

bool comp1(node a ,node b)
{
return a.x<b.x;
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
len1=arr[n-1].x-arr[0].x;

sort(arr,arr+n,comp2);
len2=arr[n-1].y-arr[0].y;

len=sqrt(pow(len1/2,2)+pow(len2,2));

len=min(len,len1);

long long lenv;

lenv=sqrt(pow(len2/2,2)+pow(len1,2));

lenv=min(lenv,len2);

cout<<min(len,lenv)<<endl;

return 0;
}

