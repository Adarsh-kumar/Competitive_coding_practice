#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
long long start;
long long end;
long long index;
}node; 

bool compare(node a ,node b)
{
if(a.start!=b.start)
return(a.start<b.start);
else
return(a.end>b.end);
}

int main()
{
int n;
cin>>n;
node arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i].start>>arr[i].end;
arr[i].index=i+1;
}
sort(arr,arr+n,compare);
bool flag=0;

for(int i=0;i<n-1;i++)
{
if(arr[i].start<=arr[n-1].start&&arr[i].end>=arr[n-1].end)
{
flag=1;
cout<<arr[n-1].index<<" "<<arr[i].index<<endl;
break;
}
}
if(!flag)
cout<<-1<<" "<<-1<<endl;

return 0;
}



