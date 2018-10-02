#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string n_balls(int arr[],int n)
{
sort(arr,arr+n);
int j;
int temp;
for(int i=0;i<n;i++)
{
j=i+1;
int count=1;
while(count!=3&&j<n)
{
temp=abs(arr[j]-arr[j-1]);
if(temp>=2)
break;
else
{
if(temp==1)
count++;
j++;
}
if(count==3)
return ("YES");
}
}
return ("NO");
}


int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<n_balls(arr,n);
return 0;
}




