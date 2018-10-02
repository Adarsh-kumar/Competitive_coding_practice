#include<bits/stdc++.h>
using namespace std;
#define maxn 100005

int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int count=0;

if(arr[0]>arr[1]||arr[n-1]<arr[n-2])
{
std::swap(arr[0],arr[n-1]);
count=1;
}

bool flag=1;


for(int i=0;i<n-1;i++)
{
if(arr[i]>arr[i+1])
{
flag=0;
break;
}
}

if(flag)
cout<<count<<endl;

else
cout<<-1<<endl;

return 0;
}

