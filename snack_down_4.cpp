#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];

int main()
{
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);

long long c=10000000000;

int count=0;

for(int i=1;i<n;i++)
{
if(a[i]-a[i-1]==c)
count++;
if(a[i]-a[i-1]<c)
{
c=min(c,a[i]-a[i-1]);
count =1;
}

}

cout<<c<<" "<<count<<endl;

return 0;
}



