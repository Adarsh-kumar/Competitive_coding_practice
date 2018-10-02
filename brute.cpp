#include<bits/stdc++.h>
using namespace std;

int getsum(int n)
{
int i=0;
int sum=0;

while(int(n/pow(10,i))>0)
{
i++;
}

i--;

while(n>0)
{
int temp=int(n/pow(10,i));
sum+=temp;
n%=int(pow(10,i));
i--;
}

return sum;
}

int main()
{
int m,n;
cin>>n>>m;

//cout<<getsum(100)<<endl;

for(int i=1;i<=999;i++)
{
for(int j=1;j<=999;j++)
{
if(getsum(i)>=n&&getsum(j)>=n&&getsum(i+j)<=m)
{
cout<<i<<endl;
cout<<j<<endl;
return 0;
}

}

}

return 0;
}

