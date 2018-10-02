#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int gcd(int x,int y)
{
int min,max;
if(x>=y)
{
min=y;
max=x;
}
else
{
min=x;
max=y;
}
if(max%min==0)
return(min);
else
return(gcd(max%min,min));
}

int main()
{
int t,n;
cin>>t;
int count;
int ans=0;
while(t--)
{
cin>>n;
count=0;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n-1;i++)
{
if(gcd(arr[i],arr[i+1])!=1)
count++;
}
cout<<count<<endl;

}
return 0;
}




