#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,s;
cin>>n>>s;
int arr[n];

s--;

for(int i=0;i<n;i++)
cin>>arr[i];

int l=s-1;
int r=s+1;

int count=0;

if(arr[s]==1)
count++;


while(l>=0&&r<n)
{
if(arr[l]==arr[r])
{
if(arr[l]==1)
count+=2;
}
l--;
r++;

}

while(l>=0)
{
if(arr[l]==1)
count++;
l--;
}

while(r<n)
{
if(arr[r]==1)
count++;
r++;
}

cout<<count<<endl;

return 0;
}


