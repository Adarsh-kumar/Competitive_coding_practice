
#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
int size;
int price;
}node;

bool comp1(node a,node b)
{
return (a.size<b.size);
}

int main()
{
int n;
cin>>n;
node arr[n];


for(int i=0;i<n;i++)
cin>>arr[i].size>>arr[i].price;

int k;

cin>>k;

int arr2[k];

for(int i=0;i<k;i++)
cin>>arr2[i];



sort(arr,arr+n,comp1);

sort(arr2,arr2+k);

int ans=INT_MIN;
int len;

int l=0;
int r=0;

int ct=0;

int ans_len;

while(l<n)
{
int temp=0;
l=ct;
r=0;
len=0;

while(r<k && l<n)
{
if(arr2[r]>=arr[l].size)
{
r++;
l++;
temp+=arr[l].price;
len++;
}
else
r++;
}
if(temp>ans)
{
ans_len=len;
ans=max(temp,ans);
}
ct++;
}

cout<<ans<<" "<<len<<endl;

return 0;
}


