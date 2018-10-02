#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

map<int ,bool> my_map;

int arr2[n];
int count=0;
for(int i=0;i<n;i++)
{
int temp=k-1;
cout<<temp<<endl;
while(temp--)
{
int temp2=temp;
while(arr[i]-temp2>=0&&temp2>=0)
{
if(my_map.find(arr[i]-temp2)==my_map.end())
{
count++;
}
temp2--;
}
if(count==temp)
break;
}
cout<<temp<<endl;
arr2[i]=arr[i]-temp;
}

for(int i=0;i<n;i++)
cout<<arr2[i]<<" ";

return 0;
}





