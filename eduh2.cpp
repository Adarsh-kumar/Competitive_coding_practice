#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool comp(int a,int b)
{
return (a>b);
}



int main()
{
int n;
long k;
cin>>n>>k;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);
int i=0;
int j=1;
int count=0;

while(i<n&&j<n)
{
if(arr[i]==arr[j])
j++;
else if(arr[i]<arr[j]&&arr[i]+k>=arr[j])
{
i++;
if(i==j)
j++;
count++;
}
else
{
i++;
if(i==j)
j++;
}
}

cout<<n-count<<endl;

return 0;
}







