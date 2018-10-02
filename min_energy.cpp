#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>n;
int arr[n];
int ans=0;
for(int i=0;i<n;i++)
cin>>arr[i];
ans=0;
for(int i=0;i<n-1;)
{
int j=i+1;
while(j<n&&abs(arr[j])>abs(arr[i]))
{
if(j==n-1)
break;
if((abs(arr[j])==arr[i]&&arr[j]<0&&j<n))
break;
j++;
}
ans+=(j-i)*arr[i]+(j*j-i*i)*arr[i]*arr[i];
i=j;
}

cout<<ans<<endl;

return 0;
}


