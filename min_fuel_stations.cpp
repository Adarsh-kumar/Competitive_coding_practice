#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,a,b;
cin>>n>>a>>b;

int arr[n];

int cost[2];

cost[0]=a;
cost[1]=b;

for(int i=0;i<n;i++)
cin>>arr[i];

int r=n/2;
int l;

int ans=0;

if(n%2==0)
l=r-1;

else
{
l=r-1;
if(arr[r]==2)
ans+=min(cost[0],cost[1]);
r=r+1;
}

if(n==1)
{
if(arr[0]==2)
cout<<min(cost[0],cost[1]);
else
cout<<0<<endl;
}

else
{

while(l>=0&&r<n)
{

if(arr[l]!=arr[r]&&(arr[l]==2||arr[r]==2))
{
if(arr[l]!=2)
ans+=cost[arr[l]];
else
ans+=cost[arr[r]];
}

else if(arr[l]==2&&arr[r]==2)
ans+=2*min(cost[0],cost[1]);

else if(arr[l]!=arr[r])
{
ans=-1;
break;
}

l--;
r++;
}

cout<<ans<<endl;

}
return 0;
}



