#include<bits/stdc++.h>
using namespace std;


int main()
{
long long y,k,n;
cin>>y>>k>>n;
 bool flag=0;

long long temp=k;

k=((y/k)+1)*k;

while(k<=n)
{
flag=1;
cout<<k-y<<" ";
k+=temp;
}

if(flag==0)
cout<<-1<<endl;
 
return 0;
}

