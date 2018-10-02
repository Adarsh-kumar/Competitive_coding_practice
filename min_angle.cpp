#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159265

typedef struct node
{
int x,y,index;
float m;
}node;

bool comp(node a,node b)
{
return (a.m<b.m);
}

int main()
{
int n;
cin>>n;
node arr[n];

node arr2[n];

int count1=0;
int count2=0;

for(int i=0;i<n;i++)
{
int temp1,temp2;
cin>>temp1>>temp2;

if(temp2>=0)
{
arr[i].x=temp1;
arr[i].y=temp2;
arr[i].index=i;
arr[i].m=float(arr[i].y)/arr[i].x;
arr[i].m=atan(arr[i].m)*180/PI;
if(arr[i].x<0)
arr[i].m=180-abs(arr[i].m);
count1++;
}

else 
{
arr2[i].x=temp1;
arr2[i].y=temp2;
arr2[i].index=i;
arr2[i].m=float(arr2[i].y)/arr2[i].x;
arr2[i].m=atan(arr2[i].m)*180/PI;
if(arr2[i].m<0)
arr2[i].m=180-abs(arr2[i].m);
count2++;
}

}

sort(arr,arr+count1,comp);

sort(arr2,arr2+count2,comp);

float val=INT_MAX;

int l=0;
int r=0;


for(int i=0;i<count1-1;i++)
{
if(arr[i+1].m-arr[i].m<val)
{
l=arr[i].index;
r=arr[i+1].index;
}
val=min(arr[i+1].m-arr[i].m,val);
}


for(int i=0;i<count2-1;i++)
{
if(arr2[i+1].m-arr2[i].m<val)
{
l=arr2[i].index;
r=arr2[i+1].index;
}
val=min(arr2[i+1].m-arr2[i].m,val);
}

cout<<l+1<<" "<<r+1<<endl;

return 0;
}
