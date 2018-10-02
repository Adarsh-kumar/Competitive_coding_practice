#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int i=0;
int j=-1;
int temp=0;
int ans=INT_MAX;
while(i<n)
{
    while(j<n&&(temp+arr[j+1]<=k))
    {
        j++;
        temp+=arr[j];
    }
if(j!=i)
    ans=min(ans,j-i+1);
else
ans=min(ans,j-i+2);

//cout<<ans<<endl;
    temp-=arr[i];
    i++;
}
cout<<ans<<endl;
}
return 0;
}

