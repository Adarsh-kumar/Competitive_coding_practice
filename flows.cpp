#include<iostream>
#include<bits/stdc++.h>
#define M 6
#define N 6
long long arr[200000];
using namespace std;

int main()
{
int n;
cin>>n;

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int l=n-1;
int r=n-1;

int count=1;

while(l>=0)
{
while(arr[l]==arr[r])
{
l--;
}

if(l>=0)
count++;

r=l;
l=r;
}

cout<<count<<endl;

return 0;
}


