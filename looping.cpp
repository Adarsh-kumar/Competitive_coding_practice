#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 1000
int arr[1000];
int type[1000];

int min(int a,int b)
{
if(a<b)
return a;
else
return b;
}

int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++)
cin>>type[i];

int a_min=100000;
int b_min=100000;
int c_min=100000;

for(int i=0;i<n;i++)
{
if(type[i]==1)
a_min=min(a_min,arr[i]);

else if(type[i]==2)
b_min=min(b_min,arr[i]);

else if(type[i]==3)
c_min=min(c_min,arr[i]);
}

cout<<min(a_min+b_min,c_min)<<endl;
return 0;
}


