#include<bits/stdc++.h>
using namespace std;

int main()
{
int m,n;
cin>>m>>n;

char arr[m][n];

for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}

for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(arr[i][j]=='B')
{
int temp=j;
while(arr[i][temp]=='B'&&temp<m)
temp++;
cout<<i+((temp-j))/2 +1<<" "<<j+((temp-j))/2 +1<<endl;
return 0;
}
}
}
return 0;
}

