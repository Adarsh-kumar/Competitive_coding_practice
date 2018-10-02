#include<iostream>
#include<bits/stdc++.h>

int binary_search(long long  arr[],int lo,int hi,long long  search)
{
while(lo<hi)
{
int mid=lo+(hi-lo)/2;
if(arr[mid]==search)
return(mid);
else if(arr[mid]>search)
hi=mid;
else 
lo=mid+1;
}
return(lo);
}


using namespace std;
int main()
{

int n,m;
cin>>n>>m;

long long room[n+1];
long long letters[m+1];
long long sum[n+1];

room[0]=0;
sum[0]=0;

for(int i=1;i<=n;i++)
{
cin>>room[i];
sum[i]=room[i]+sum[i-1];
}

for(int i=0;i<m;i++)
{
cin>>letters[i];
int temp=binary_search(sum,1,n+1,letters[i]);
cout<<temp<<" "<<letters[i]-sum[temp-1]<<endl;
}

return 0;
}



