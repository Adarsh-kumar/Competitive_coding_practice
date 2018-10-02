#include<bits/stdc++.h>
using namespace std;

long long cal_temp2(int i)
{
long long ans=0;
for(int j=0;j<=i;j++)
{
ans+=pow(2,j);
}

return ans;
}

int main()
{
int t;
cin>>t;

while(t--)
{
long long temp;
cin>>temp;

long long ans1=0;
long long ans2=0;

int i;

for(i=0;i<40;i++)
{
if(pow(2,i)>=temp)
break;
}

ans1=((temp)*(temp+1))/2;

if(pow(2,i)==temp)
ans2=cal_temp2(i);
else
ans2=cal_temp2(i-1);

ans1-=ans2;

cout<<ans1-ans2<<endl;

}

return 0;
}

