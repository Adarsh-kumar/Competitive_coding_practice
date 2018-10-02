#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    
    while(t--)
    {
int n;
cin>>n;

int arr[n];

int prefix[n+1];
prefix[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
prefix[i+1]=prefix[i]+arr[i];
}

int ans=INT_MAX;

int min_index=-1;

for(int i=0;i<n;i++)
{
int temp=0;
if(arr[i]<0)
{
int j=i;
while(arr[i]<0)
{
temp+=arr[i];
i++;
}
if(temp<ans)
{
min_index=j;
ans=min(temp,ans);
}
}
}


if(min_index!=-1)
{
    if(abs(ans)+1>prefix[min_index])
cout<<abs(ans)+1-prefix[min_index]<<endl;
else
cout<<1<<endl;
}

else
cout<<1<<endl;
}

return 0;
}



