#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int l,r;
}node;

bool comp(node a,node b)
{
int l1=(a.r-a.l);
int l2=(b.r-b.l);
return (l1>l2);
}

int main()
{
int n,q;

cin>>n>>q;
long long arr[n];
node arr2[q];

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n,greater<int>());

long long sum[n+1];
sum[0]=0;

for(int i=0;i<n;i++)
{
sum[i+1]=arr[i]+sum[i];
}


long long ans=0;
i=0;
while(q--)
{
cin>>arr2[i].l>>arr2[i].r;
}

sort(arr2,arr2+n,comp);

int left_most=INT_MAX;
int right_most=INT_MIN;

int visited=0;

for(int i=0;i<n;i++)
{
left_most=min(left_most,arr2[i].l);
right_most=max(right_most,arr2[i].r);
int temp;
int temp2;
if(left_most==INT_MIN)
{

 temp=arr2[i].r-arr2[i].l;

temp2=visited+temp;

ans+=sum[temp2+1]-sum[visited];

}

else if(arr2[i].l>=left_most&&arr2[i].r<=right_most)
{
temp=(arr2[i].l-left_most);
temp2=(arr2[i].l-left_most)+(arr2[i].r-arr2[i].l);

ans+=sum[temp2+1]-sum[temp];
}

else if(arr2[i].l>=left_most)
{
temp=(arr2[i].l-left_most);
temp2=(arr2[i].l-left_most)+(arr2[i].r-arr2[i].l);

visited+=(arr2[i].r-right_most);

right_most=arr2[i].r;
}

else
{
temp=(arr2[i].l-left_most);
temp2=(arr2[i].l-left_most)+(arr2[i].r-arr2[i].l);

visited+=(arr2[i].r-right_most);

right_most=arr2[i].r;
}



cout<<ans<<endl;

return 0;
}


