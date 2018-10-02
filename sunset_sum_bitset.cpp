#include <bits/stdc++.h>
#define sum 15000000+1

using namespace std;

long long arr[20];

//int dp[20][15*1000000];
bitset<sum> bit;

int main()
{
int t,n,q;

cin>>t;

while(t--)
{
cin>>n;

bit.reset();
bit[0]=1;

for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
if(arr[i]>0)
bit|= bit<<(arr[i]);
else
bit|=bit>>abs(arr[i]);
}

cin>>q;


if(bit[q]==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}

return 0;
}

