#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
long long l,r;
}node;

bool comp(node a,node b)
{
return((a.r-a.l)>(b.r-b.l));
}


int main()
{
int n;
cin>>n;

vector<node> arr(n);

for(int i=0;i<n;i++)
{
cin>>arr[i].l>>arr[i].r;
}

vector<node> arr2(arr);

sort(arr.begin(),arr.end(),comp);

bool flag=1;
int ans;


for(int i=0;i<n;i++)
{
if(arr2[i].l>=arr[0].l&&arr2[i].r<=arr[0].r)
{
if(arr2[i].l==arr[0].l&&arr2[i].r==arr[0].r)
ans=i+1;
}
else
{
flag=0;
break;
}
}

if(flag)
cout<<ans<<endl;

else
cout<<-1<<endl;

return 0;
}

