#include<bits/stdc++.h>
using namespace std;


typedef struct  node
{
int l,r;
int index,home;
}node;


bool comp(node a,node b)
{
return (a.l<b.l);
}

bool comp2(node a ,node b)
{
return (a.index<b.index);
}

int binary_search(node arr[],int val,int start,int end)
{
int mid=start+(end-start)/2;
if(start==end)
{
if(arr[start].l==val)
return start;
else
return -1;
}
else if(arr[mid].l==val)
return mid;
else if(arr[mid].l>val)
return (binary_search(arr,val,start,mid));
else
return(binary_search(arr,val,mid+1,end));
}


int main()
{

int n;
cin>>n;
node arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].l>>arr[i].r;
arr[i].index=i;
}

sort(arr,arr+n,comp);

for(int i=0;i<n;i++)
{
int start=0;
int end=n;
int temp=-1;

if(binary_search(arr,arr[i].r,start,end)==-1)
{
arr[i].home=(n-1);
}

else
{
while(binary_search(arr,arr[i].r,start,end)!=-1)
{
temp=binary_search(arr,arr[i].r,start,end);
if(temp>0)
end=temp-1;
else
break;
}

start=0;
end=n;
int temp2=-1;

while(binary_search(arr,arr[i].r,start,end)!=-1)
{
temp2=binary_search(arr,arr[i].r,start,end);
if(temp2<n-1)
start=temp2+1;
else
break;
}


arr[i].home=(n-1)+(temp2-temp)+1;
}
}

sort(arr,arr+n,comp2);

for(int i=0;i<n;i++)
cout<<arr[i].home<<" "<<2*(n-1)-arr[i].home<<endl;

return 0;
}



