#include <bits/stdc++.h>

using namespace std;

int boxes[500001];

int max_min_box(int arr[],int n,int k)
{

int lo=10;
long long hi=500000*500000;

while(lo<hi)
{
long long  mid=lo+(hi-lo)/2;

int current=0;
int workers=0;

for(int i=0;i<n;i++)
{
if(arr[i]%mid==0)
workers+=arr[i]/mid;
else
workers+=arr[i]/mid +1;
}

if(workers>k)
lo=mid+1;

else
hi=mid;

}

return lo;

}

int main()
{
int m,n;

while(scanf("%d%d",&m,&n)!=EOF)
{
if(m==-1)
break;

for(int i=0;i<m;i++)
cin>>boxes[i];

cout<<max_min_box(boxes,m,n)<<endl;
}

return 0;
}



