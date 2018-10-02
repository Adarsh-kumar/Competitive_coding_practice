#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
long long l,r,no_of_times;
}node;

const int N = 200 * 1000 + 9;

int n, a, b;

node arr[N];



bool comp(node aa,node bb)
{
return((pow(2,a)*aa.l+bb.r)>(pow(2,a)*bb.l+aa.r));
}

bool comp2(node a ,node b)
{
return(abs(a.l-a.r)>abs(b.l-b.r));
}



int main()
{
//int n,a,b;
cin>>n>>a>>b;
int count=0;
//node arr[n];

//arr[0].no_of_times=a;

for(int i=0;i<n;i++)
{
cin>>arr[i].l>>arr[i].r;
}

//this will work only when we have operation one and two available
sort(arr,arr+n,comp);

arr[0].l*=pow(2,a);

long long ans=0;

if(arr[0].l<=arr[0].r)
ans+=arr[0].r;
else
{
if(b)
{
ans+=arr[0].l;
b--;
}
else
{
ans+=arr[0].r;
}
}

sort(arr+1,arr+n,comp2);

for(int i=1;i<n;i++)
{
if(arr[i].l<=arr[i].r)
{
ans+=arr[i].r;
}
else
{
if(b)
{
b--;
ans+=arr[i].l;
}
else
ans+=arr[i].r;
}
}

cout<<ans<<endl;


return 0;
}







