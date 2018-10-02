#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;

int count;
int ans=INT_MAX;
int index;
int temp;

if(k>=n)
{
cout<<1<<endl;
cout<<1<<endl;
}


else if(k==0)
{
cout<<n<<endl;
int p=1;
while(p<=n)
{
cout<<p<<" ";
p++;
}

}


else
{

for(int i=1;i<=k+1;i++)
{
count=0;
temp=i;
int temp2=i;

while(temp2<=n)
{
count++;
if(temp2+(2*k+1)<=n)
temp2+=(2*k+1);
else 
temp2+=(k+1);
}

if(count<ans)
{
index=temp;
ans=count;
}

}


if(ans==INT_MAX)
{
cout<<1<<endl;
cout<<1<<endl;
}
else
{
cout<<ans<<endl;
while(ans--)
{
cout<<index<<" ";
index+=(2*k+1);
}
}
}
return 0;
}


