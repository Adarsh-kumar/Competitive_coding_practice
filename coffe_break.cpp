#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
long long val,index,day;
}node;

bool visited[200005];
node arr[200005];

long long days=0;
long long  n;
long long m,d;


long long go_binary(long long value)
{
long long  lo=0;
long long  hi=n;

while(lo<hi)
{
long long  mid=lo+(hi-lo)/2;

if(arr[mid].val==value)
return mid;

else if(arr[mid].val>value)
hi=mid;

else
lo=mid+1;
}

return lo;
}


void solve(long long i)
{
visited[i]=1;
arr[i].day=days;

long long  temp=go_binary(arr[i].val+d+1);
cout<<"temp here"<<endl;
cout<<temp<<endl;

if(!visited[temp]&&(arr[temp].val>=arr[i].val+d+1))
{
arr[temp].day=days;
solve(temp);
}

}





bool comp(node a,node b)
{
return (a.val<b.val);
}

bool comp2(node a ,node b)
{
return (a.index<b.index);
}


int main()
{
cin>>n>>m>>d;
memset(visited,0,sizeof(visited));

for(int i=0;i<n;i++)
{
cin>>arr[i].val;
arr[i].index=i;
}

sort(arr,arr+n,comp);

//cout<<go_binary(arr[0].val+d)<<endl;


for(int i=0;i<n;i++)
{
if(!visited[i])
{
days++;
solve(i);
}

}

sort(arr,arr+n,comp2);



cout<<days<<endl;

for(int i=0;i<n;i++)
cout<<arr[i].day<<" ";

return 0;
}



