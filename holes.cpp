#include<bits/stdc++.h>

using namespace std;

int arr[1001];

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
cin>>arr[i];

for(int i=1;i<=n;i++)
{
bool visited[n+1];
memset(visited,0,sizeof(visited));
int j=i;
while(visited[j]!=1)
{
visited[j]=1;
j=arr[j];
}

cout<<j<<" ";
}

return 0;
}



