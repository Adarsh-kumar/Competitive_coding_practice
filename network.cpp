#include<bits/stdc++.h>
using namespace std;

int arr[150001];

int parent[150001];

int main()
{
int n,m;
cin>>n>>m;

for(int i=0;i<=n;i++)
{
arr[i]=i;
parent[i]=i;
}



for(int i=0;i<m;i++)
{
int a,b;
cin>>a>>b;
if(a<b)
parent[b]=a;
else
parent[a]=b;
}



bool flag=1;
for(int i=0;i<=n;i++)
{
if(parent[parent[i]]!=parent[i])
{

cout<<"NO"<<endl;
flag=0;
break;

}
}
if(flag)
cout<<"YES"<<endl;

return 0;
}

