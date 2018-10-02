#include<bits/stdc++.h>
using namespace std;

long long arr[100005];

int n;

long long func(long long p)
{
long long sum=0;

for(int i=0;i<n;i++)
sum+=abs(p-arr[i]);

return sum;
}

double go_binary()
{
long long  lo=0;
long long hi=1000000000;

double l1;
double l2;

int count=0;

while(count<200)
{
l1=lo+double(hi-lo)/3;
l2=lo+double(2*(hi-lo))/3;

cout<<lo<<endl;

if(func(l1)>func(l2))
lo=l1;
else
hi=l2;

count++;

}

return lo;
}


int main()
{

cin>>n;

for(int i=0;i<n;i++)
cin>>arr[i];

cout<<go_binary();

return 0;
}


