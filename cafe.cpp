#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
int hour;
int minute;
}node;

int diff(node a ,node b)
{
return ((b.hour-a.hour)*60+(b.minute-a.minute));
}

int main()
{
int n;
cin>>n;

node arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].hour>>arr[i].minute;
}

int count=1;


for(int i=1;i<n;i++)
{
if(diff(arr[i-1],arr[i])<1)
count++;
}

cout<<count<<endl;

return 0;}

