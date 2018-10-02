#include<bits/stdc++.h>

using namespace std;


typedef struct node
{
int left;
int right;
}node;


int main()
{
int n;
cin>>n;

node arr[n];
int curl=0;
int curr=0;

for(int i=0;i<n;i++)
{
cin>>arr[i].left>>arr[i].right;
curl+=arr[i].left;
curr+=arr[i].right;
}

bool flag=0;

if(curl%2==0&&curr%2==0)
{
flag=1;
cout<<0<<endl;
}

else if(n>1)
{
for(int i=0;i<n;i++)
{
if((arr[i].left%2==0&&arr[i].right%2!=0)||(arr[i].right%2==0&&arr[i].left%2!=0))
{
flag=1;
cout<<1<<endl;
break;
}
}
}
if(!flag)
{
cout<<-1<<endl;
}

return 0;


}


