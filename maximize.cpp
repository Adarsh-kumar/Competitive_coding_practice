#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int> arr(10000);
vector<int> sum(10000);
int q,a,b;
cin>>q;
int i=0;
while(q)
{
cin>>a;
if(i>arr.size())
{
arr.resize(arr.size()+100);
sum.resize(sum.size()+100);
}
if(a==1)
{
cin>>b;
arr[i]=b;
if(i==0)
sum[i]=arr[i];
else
sum[i]=sum[i-1]+arr[i];
i++;
}
else
{
int l=0,r=0;
float ans=0;
float temp,current;
int n=arr.size();
while(l<i)
{
r=l+1;
temp=0;
while(r<i)
{
if(l==0)
{
    current=(arr[r])-(float(sum[r])/(r+1));
if(current>temp)
temp=current;
r++;
}
else
{
    current=(arr[r])-float(sum[r]-sum[l-1])/(r-l+1);
if(current >temp)
temp=current;
r++;
}
}
ans=max(temp,ans);
l++;
}

cout<<float(ans)<<endl;
}
q--;
}

    
return 0;
}



