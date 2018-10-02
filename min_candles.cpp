#include<bits/stdc++.h>

using namespace std;

int main()
{
int m,t,r;
cin>>m>>t>>r;

int arr[m];

for(int i=0;i<m;i++)
cin>>arr[i];

if(t<r)
{
cout<<-1<<endl;
return 0;
}

int ans=r;
int temp=r;
int lit=0;

for(int i=1;i<m;i++)
{
if((arr[lit]-temp)+t<arr[i])
{

int temp2=arr[i]-((arr[lit]-temp)+t);

if(temp2<r)
{
ans+=temp;
temp=arr[i]-((arr[lit]-temp)+t);
}

else
{
ans+=r;
temp=r;
}

lit=i;
}
}

cout<<ans<<endl;

return 0;
}

