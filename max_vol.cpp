#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
long long a,b,c,min,sum;
int index;
}node;

bool comp(node a1,node b1)
{
a1.min=min(min(a1.a,a1.b),a1.c);
b1.min=min(min(b1.a,b1.b),b1.c);
return (a1.min<b1.min);
}

bool comp2(node a1,node a2)
{
a1.sum=a1.a+a1.b+a1.c;
a2.sum=a2.a+a2.b+a2.c;
return (a1.sum<a2.sum);
}

node add(node a,node b)
{
node temp;
temp.a=(a.a+b.a);
temp.b=(a.b+b.b);
temp.c=(a.c+b.c);

return temp;
}

int main()
{
int n;
cin>>n;

node arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].a>>arr[i].b>>arr[i].c;
arr[i].index=i+1;
}

sort(arr,arr+n,comp);

long long ans=min(min(arr[n-1].a,arr[n-1].b),arr[n-1].c);

sort(arr,arr+n,comp2);

int indexer;
bool flag=0;

for(int i=0;i<n-1;i++)
{
node temp=add(arr[i],arr[i+1]);
long long temp2=min(min(temp.a,temp.b),temp.c);
if(temp2>ans)
{
flag=1;
indexer=arr[i].index;
ans=temp2;
}
}

if(flag)
{
cout<<2<<endl;
cout<<indexer<<" "<<indexer+1<<endl;
}

else
{
cout<<1<<endl;
cout<<arr[n-1].index<<endl;
}

return 0;
}





