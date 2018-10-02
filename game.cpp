#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;

typedef struct arr
{
int value;
int index;
}arr;

bool comp(arr a ,arr b)
{
return(a.value>b.value);
}

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
arr arr1[n],arr2[n];

for(int i=0;i<n;i++)
{
cin>>arr1[i].value;
arr1[i].index=i;
}

for(int i=0;i<n;i++)
{
cin>>arr2[i].value;
arr2[i].index=i;
}


sort(arr1,arr1+n,comp);
sort(arr2,arr2+n,comp);

int l=0,r=0;
int l_price=0;
int r_price=0;
int flag=0;
int visited[n];
for(int i=0;i<n;i++)
visited[i]=0;

while(n)
{
if((visited[arr1[l].index]==0&&flag==0)||(visited[arr2[r].index]==0&&flag==1))
{
if(flag==0)
{
l_price+=arr1[l].value;
visited[arr1[l].index]==1;
l++;
flag=1;
}
else
{
r_price+=arr2[r].value;
visited[arr2[r].index]==1;
r++;
flag=0;
}
n--;
}
else
{
if(flag==0)
l++;
else
r++;
}
}
if(l_price>r_price)
cout<<"First"<<endl;
else if(l_price<r_price)
cout<<"Second"<<endl;
else
cout<<"Tie"<<endl;
}


return 0;
}



