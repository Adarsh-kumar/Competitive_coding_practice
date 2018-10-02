#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];
//long long sum[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int a=0,b=n-1;
int a_sum=arr[0];
int b_sum=arr[n-1];

while(b-a>1)
{
if(a_sum>b_sum)
{
b--;
b_sum+=arr[b];
}
else if(a_sum<b_sum)
{
a++;
a_sum+=arr[a];
}
else
{
if(b-a==1)
break;
else if(b-a==2)
{
a++;
break;
}
else
{
a++;
a_sum+=arr[a];
b--;
b_sum+=arr[b];
}
}
}

cout<<a+1<<" "<<n-1-a<<endl;
return 0;
}


