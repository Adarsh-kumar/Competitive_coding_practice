#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
bool arr[n];

int count=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i])
count++;
}

if(count==(n-count))
{
if(arr[0]==0||arr[n-1]==1)
cout<<count+1<<endl;
else
cout<<count<<endl;
}

else if(count>n-count)
{
if(arr[0]==0)
cout<<count+1<<endl;
else
cout<<count<<endl;
}

else
{
if(arr[n-1]==1)
cout<<(n-count)+1<<endl;
else
cout<<(n-count)<<endl;
}

return 0;
}


