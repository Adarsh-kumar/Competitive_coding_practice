#include<bits/stdc++.h>
using namespace std;

int go_binary(int arr[],int temp_index,int val,int n)
{
int lo=temp_index;
int hi=n;



if(arr[lo+1]-arr[temp_index]>=val)
return temp_index;

if(arr[n-1]-arr[temp_index]<=val)
return n-1;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid]-arr[temp_index]==val)
return mid;

else if(arr[mid]-arr[temp_index]>val)
hi=mid;

else 
lo=mid+1;

}

return lo;
}




int main()
{
int n,q;
cin>>n>>q;
int arr[n];

int arr2[n];

int sum[n+1];

sum[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
sum[i+1]=sum[i]+arr[i];
}


for(int i=0;i<n;i++)
{
cin>>arr2[i];
}

int index=0;
long long sub=0;

int total=n;

int temp;

for(int i=0;i<n;i++)
{

if(arr2[i]-sub<0)
{
sub-=arr2[i];
cout<<n-temp;
total-=temp;
}

else
{

temp=go_binary(sum,index,arr2[i]-sub,n+1);

if(temp==n)
{
cout<<n<<endl;
index=0;
}

else
{

cout<<(total-temp)<<endl;
total-=temp;

index=temp;
if(sum[temp]-sum[index]>arr2[i]-sub)
sub=sum[temp]-(arr2[i]-sub);

}

}

}

return 0;
}


