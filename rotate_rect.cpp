#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long arr[100000];
long long arr2[100000];

bool flag=0;

int main()
{
int n;
cin>>n;
for (int i=0;i<n;i++)
cin>>arr[i]>>arr2[i];

for(int i=0;i<n-1;i++)
{
if(min(arr[i+1],arr2[i+1])>max(arr[i],arr2[i]))
{
flag=1;
cout<<"NO"<<endl;
break;
}
}

if(!flag)
cout<<"YES"<<endl;

return 0;
}


