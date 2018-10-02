#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int count=1;

bool flag=1;

for(int i=0;i<n-1;i++)
{

if(arr[i+1]<arr[i])
{
//condition if the elements are repeating 
//e.g 2 2 2 2 1
if(i>0)
{
while(arr[i-1]==arr[i])
i--;
}

if(count==0)
{

flag=0;
break;

}

long long temp=arr[i+1];

int swap_id=-1;

if(i==0)
{
for(int j=i+1;j<n;j++)
{

if(arr[j]<=temp)
swap_id=j;
temp=min(arr[j],temp);

}
if(swap_id==-1)
{
flag=0;
break;
}
std::swap(arr[i],arr[swap_id]);
count--;

}


else 
{

for(int j=i+1;j<n;j++)
{
if(arr[j]<=temp&&arr[j]>=arr[i-1])
{
swap_id=j;
temp=min(arr[j],temp);
}
}


if(swap_id==-1)
{
flag=0;
break;
}

std::swap(arr[i],arr[swap_id]);
count--;
}

}

}

if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;
}



