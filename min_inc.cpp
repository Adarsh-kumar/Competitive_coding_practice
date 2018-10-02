#include<bits/stdc++.h>
#include<bits/stdc++.h>

using namespace std;
int arr[105];

int main()
{
int n;
cin>>n;
float sum=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
sum+=arr[i];
}
sort(arr,arr+n);

int count=0;

float pass_limit=4*n+float(n)/2;

for(int i=0;i<n;i++)
{
if(sum>=pass_limit)
break;
else
{
sum+=5-arr[i];
count+=1;
}
}

cout<<count<<endl;

return 0;
}

