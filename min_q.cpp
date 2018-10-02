#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
long long k;

cin>>n>>k;
long long arr[n];

bool flag=1;

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);

if(2*k>=arr[n-1])
cout<<0;

else if(arr[0]>2*k)
cout<<1;


else
{
int i=0;
while(2*k>=arr[i])
i++;

for(int j=i;j<n;j++)
{
if(2*arr[j-1]>=arr[j])
j++;
else
{
flag=0;
break;
}

}
if(flag==0)
cout<<1;
else
cout<<0;
}


return 0;}

