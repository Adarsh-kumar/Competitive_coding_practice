#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}

int main()
{
int n,m,k;

cin>>n>>m>>k;

int arr[m+1];

for(int i=0;i<=m;i++)
cin>>arr[i];


int count=0;

for(int i=0;i<m;i++)
{
if(countSetBits(arr[i]^arr[m])<=k)
count++;
}

cout<<count<<endl;

return 0;
}

